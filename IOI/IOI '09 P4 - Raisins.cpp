#include <bits/stdc++.h>

using namespace std;

int n, m;
int choc[51][51];
int raisins[51][51];
int dp[51][51][51][51];

int solve(int r1, int c1, int r2, int c2){

if(dp[r1][c1][r2][c2] != -1) return dp[r1][c1][r2][c2];

if(r1 == r2 && c1 == c2) return dp[r1][c1][r2][c2] = 0;

  int ans = 999999999;
  
    for(int i = r1 + 1; i <= r2; i++){
      ans = min(ans, solve(r1, c1, i - 1, c2) + solve(i, c1, r2, c2) + raisins[r2][c2] - raisins[r2][c1 - 1] - raisins[r1 - 1][c2] + raisins[r1 - 1][c1 - 1]);
    }

    for(int i = c1 + 1; i <= c2; i++){
      ans = min(ans, solve(r1, c1, r2, i - 1) + solve(r1, i, r2, c2)  + raisins[r2][c2] - raisins[r2][c1 - 1] - raisins[r1 - 1][c2] + raisins[r1 - 1][c1 - 1]);
    }

  return dp[r1][c1][r2][c2] = ans;

}

int main() {
  memset(dp, -1, sizeof dp);
  cin>>n>>m;
  
  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= m; j++) cin>>choc[i][j];
  }

  raisins[1][1] = choc[1][1];
  
  for(int i = 2; i <= n; i++) 
    raisins[i][1] = choc[i][1] + raisins[i - 1][1];
  
  for(int j = 2; j <= m; j++){
    raisins[1][j] = choc[1][j] + raisins[1][j - 1];
    for(int i = 2; i <= n; i++){
      raisins[i][j] = raisins[i - 1][j] + choc[i][j] + raisins[i][j - 1] - raisins[i - 1][j - 1]; 
    }
  }

  cout<<solve(1, 1, n, m)<<endl;

    return 0;
}