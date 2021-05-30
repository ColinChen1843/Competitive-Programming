#include <bits/stdc++.h>

using namespace std;
int d, n;
string k;
long long int dp[10123][151][2];

int solve(int pos, int sum, int small){
  
  if(dp[pos][sum][small] != -1) return dp[pos][sum][small];

  if(pos == n){ 
    if(sum == 0) return dp[pos][sum][small] = 1;
    return dp[pos][sum][small] = 0;
  }

  long long int ans = 0;

  for(int i = 0; i < 10; i++){

    if(small == 0 && i > k[pos] - '0') break;

    if(i < k[pos] - '0') ans += solve(pos+1, (sum + i) % d, 1);

    else ans += solve(pos+1, (sum + i) % d, small);
  }

  return dp[pos][sum][small] = ans % 1000000007;
  
}

int main() {

  memset(dp, -1, sizeof dp);

  cin>>k>>d;
  
  n = k.length();

  cout<<solve(0, 0, 0) - 1<<endl;

    return 0;
}