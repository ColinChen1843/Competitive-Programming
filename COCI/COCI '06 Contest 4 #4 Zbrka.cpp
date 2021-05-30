#include <bits/stdc++.h>

using namespace std;

int n, c;
int dp[1007][10007];
signed main() {
  cin>>n>>c;

  dp[1][0] = 1;
  
  for(int i = 2; i <= n; i++){
    for(int j = 0; j <= c; j++){
      long long int a = 0, b = dp[i - 1][j], d = 0;
      if(j - 1 >= 0) a = dp[i][j - 1];
      if(j - i >= 0) d = dp[i - 1][j - i];
      dp[i][j] = ((a + b - d) + 1000000007LL) % 1000000007LL;
    }
  }

  cout<< dp[n][c] <<endl;

    return 0;
}