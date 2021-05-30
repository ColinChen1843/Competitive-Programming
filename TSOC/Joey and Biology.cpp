#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin>>n>>m;
  string s1, s2;
  
  cin>>s1>>s2;

  int dp[1001][1001];

  for(int i = 0; i <= n; i++) dp[0][i] = ceil(i / 3.0);
  for(int j = 1; j <= m; j++) dp[j][0] = ceil(j / 3.0);

  for(int j = 1; j <= m; j++){ 
    for(int i = 1; i <= n; i++){
      int ans = 999999999;
      if(s1[i - 1] == s2[j - 1]) ans = dp[j - 1][i - 1];
      if(i >= 3) ans = min(ans, dp[j][i - 3] + 1);
      if(j >= 3) ans = min(ans, dp[j - 3][i] + 1);
      if(i >= 2) ans = min(ans, dp[j][i - 2] + 1);
      if(j >= 2) ans = min(ans, dp[j - 2][i] + 1);
      ans = min(ans, dp[j - 1][i] + 1);
      ans = min(ans, dp[j][i - 1] + 1);
      ans = min(ans, dp[j - 1][i - 1] + 1);
      dp[j][i] = ans;
    }
  }

cout<<dp[m][n]<<endl;

  return 0;
}