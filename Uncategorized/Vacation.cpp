#include <bits/stdc++.h>

using namespace std;
int n, last = 0;
int a[100001][4];
int dp[100001][4];

int solve(int curr, int last){
  if(dp[curr][last] != -1)
    return dp[curr][last];
  if(curr > n)
    return dp[curr][last] = 0;
  if(last == 1)
    return dp[curr][last] = max(solve(curr + 1, 2) + a[curr][2], solve(curr + 1, 3) + a[curr][3]);
  if(last == 2)
    return dp[curr][last] = max(solve(curr + 1, 1) + a[curr][1], solve(curr + 1, 3) + a[curr][3]);
  if(last == 3)
    return dp[curr][last] = max(solve(curr + 1, 2) + a[curr][2], solve(curr + 1, 1) + a[curr][1]);

  int w = max(solve(curr + 1, 2) + a[curr][2], solve(curr + 1, 1) + a[curr][1]);

  return dp[curr][last] = max(w , solve(curr + 1, 3) + a[curr][3]);
}

int main() {
  memset(dp,-1, sizeof dp);
  cin>>n;

  for(int i = 1; i <= n; i++)
    for(int j = 1; j <= 3; j++)
      cin>>a[i][j];
    cout<<solve(1,0)<<endl;
    return 0;
}