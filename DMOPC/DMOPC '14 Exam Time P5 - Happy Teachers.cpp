#include <bits/stdc++.h>

using namespace std;
int main() {

  int n, s;

  cin>>n;

  vector<int> h(n+1), e(n+1), p(n+1);

  for(int i = 1; i <= n; i++){
    cin>>h[i]>>e[i]>>p[i];
  }

  cin>>s;

  vector<vector<pair<int,int>>> dp(n+1, vector<pair<int,int>>(s+1));

  for(int i = 1; i <= n; i++){
    for(int j = 0; j <= s; j++){
      int sum = 0, k = h[i];
      dp[i][j] = dp[i-1][j];
      for(int time = p[i], count = 1; time <= j; time += p[i], count++){
        sum += k;
        k -= e[i];
        if(j - time >= 0){

          if(dp[i - 1][j - time].first + sum > dp[i][j].first){
          dp[i][j].first = dp[i - 1][j - time].first + sum;
          dp[i][j].second = dp[i - 1][j - time].second + count;
          }

          if(dp[i - 1][j - time].first + sum == dp[i][j].first){
            if(dp[i - 1][j - time].second + count < dp[i][j].second){
            dp[i][j].first = dp[i - 1][j - time].first + sum;
            dp[i][j].second = dp[i - 1][j - time].second + count;
            }
          }
        }
        else{
          break;
        }
      }
    }
  }

  pair<int, int> ans = {0, 0};

  for(int i = 0; i <= s; i++){
    if(dp[n][i].first > ans.first){
      ans = dp[n][i];
    }
    if(dp[n][i].first == ans.first){
      if(dp[n][i].second < ans.second){
        ans = dp[n][i];
      }
    }
  }

  cout<<ans.first<<endl;
  cout<<ans.second<<endl;

  return 0;
}