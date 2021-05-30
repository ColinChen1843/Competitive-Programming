#include <bits/stdc++.h>
using namespace std;

int n, t;
vector<vector<int>> times, values;

int main() {

  cin >> n >> t;
  times.resize(n + 1, vector<int>(3));
  values.resize(n + 1, vector<int>(3));
  for(int i = 1; i <= n; i++) {
    cin >> times[i][0] >> values[i][0];
    cin >> times[i][1] >> values[i][1];
    cin >> times[i][2] >> values[i][2];
  }

  vector<int> dp(t + 1);
  for(int i = 1; i <= n; i++) {
    vector<int> curr_dp(t + 1);
    for(int j = 1; j <= t; j++) {
      curr_dp[j] = dp[j];
      for(int k = 0; k < 3; k++) {
        if(j - times[i][k] >= 0)
          curr_dp[j] = max(curr_dp[j], dp[j - times[i][k]] + values[i][k]);      
      }
    }
    dp = curr_dp;
  }
  
  int ans = 0;
  for(int i = 1; i <= t; i++){
    ans = max(ans, dp[i]);
  }
  cout << ans << endl;

  return 0;
}