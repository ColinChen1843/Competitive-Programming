#include <bits/stdc++.h>

using namespace std;

int n, s;
string k;
vector<int> a;
int dp[1001][2][1024][2];
long long int solve(int curr, int small, int bit, int lead){

  if(dp[curr][small][bit][lead] != -1) return dp[curr][small][bit][lead];

  if(curr == k.length()){
    
    if(bit == s) return 1;
    
    return 0;
  }

  long long int ans = 0;

  if(lead == 1) ans += solve(curr + 1, 1, bit, 1);

  else{
    if(small == 0 && k[curr] - '0' == 0){
      if(1 & bit) ans += solve(curr + 1, 0, bit, lead);
      else ans += solve(curr + 1, 0, bit + (1* a[0]), lead);
    }
    else{
      if(1 & bit) ans += solve(curr + 1, 1, bit, lead);
      else ans += solve(curr + 1, 1, bit + (1* a[0]), lead);
    }
  }

  for(int i = 1; i < 10; i++){

    if((1 << i) & bit){
      if(small == 0 && i > k[curr] - '0') break;

      if(small == 0 && i < k[curr] - '0') ans += solve(curr + 1, 1, bit, 0);

      else ans += solve(curr + 1, small, bit, 0);
    }
    
    else{
      if(small == 0 && i > k[curr] - '0') break;

      if(small == 0 && i < k[curr] - '0') ans += solve(curr + 1, 1, bit + (pow(2,i)*a[i]), 0);

      else ans += solve(curr + 1, small, bit + (pow(2,i) * a[i]), 0);
    }
  }

  return dp[curr][small][bit][lead] = ans % 1000000007;

}

int main() {
 
  memset(dp, -1, sizeof dp);
 
  int input;

  cin>>n;

  a.resize(10);
  for(int i = 1; i <= n; i++){ 
    cin>>input;
    a[input] = 1;
    s += pow(2,input);
  }

  cin>>k;

  
  int g = solve(0, 0, 0, 1);
  if(s == 1 || s == 0) cout<<g + 1<<endl;
  else cout<<g<<endl;

    return 0;
}