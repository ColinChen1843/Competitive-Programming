#include <bits/stdc++.h>

using namespace std;
string a1, a, b;
int s;
bool smallest = false;
long long smallest_ans;
long long dp[17][2][136][2]; 

long long solve(int curr, int small, int big, int sum, long long c){

  if(curr == b.length()){
    if(sum == s){
      if(smallest == 0){ 
        smallest = 1;
        smallest_ans = c;
      }

      return dp[curr][small][sum][big] = 1;
    }
    return dp[curr][small][sum][big] = 0;
  }

  if(dp[curr][small][sum][big] != -1) return dp[curr][small][sum][big];

  if(sum > s) return dp[curr][small][sum][big] = 0;

  long long int ans = 0;
  int top = 9, bottom = 0;

  if(small == 0) top = b[curr] - '0';
  if(big == 0) bottom = a[curr] - '0';

  for(int i = bottom; i <= top; i++){

    int smal = small, bigg = big;
    
    if(i < top && small == 0) smal = 1;
    if(i > bottom && big == 0) bigg = 1;

    ans += solve(curr + 1, smal, bigg, sum + i, c * 10 + i);
  }

  return dp[curr][small][sum][big] = ans;
}

int main() {

  memset(dp, -1, sizeof dp);

  cin>>a1>>b>>s;

  int diff = b.length() - a1.length();

  for(int i = 0; i < diff; i++) a += '0';

  a += a1;

  long long ans_b = solve(0,0,0,0,0);

  cout<<ans_b<<endl;
  cout<<smallest_ans<<endl;
  
  return 0;
}