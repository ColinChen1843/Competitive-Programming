#include <bits/stdc++.h>

using namespace std;
long long int n;
vector<long long int> c,d;
long long int dp[5001][5001];
long long int solve(long long int curr, long long int last){
  if(last >= n)
    return dp[curr][n] = 0;
  if(dp[curr][last] != -1){
    return dp[curr][last];
  }
  if(curr == last)
    return dp[curr][last] = solve(curr + 1, last + d[curr]) + c[curr];
  if(curr > last)
    return dp[curr][last] = 999999999;
  return dp[curr][last] = min(solve(curr + 1, last), solve(curr + 1, last + d[curr]) + c[curr]);
}

int main() {
  memset(dp,-1,sizeof dp);
  cin>>n;
  c.resize(n + 1);
  d.resize(n + 1);
  for(long long int i = 1; i <= n; i++)
    cin>>c[i]>>d[i];

cout<<solve(1,1)<<endl;
    return 0;
}