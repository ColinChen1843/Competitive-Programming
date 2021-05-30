#include <bits/stdc++.h>

using namespace std;

int main() {

  int m, n;
  string a, b;
  cin>>n>>m;
  cin>>a>>b;

  a.insert(0,"~");
  b.insert(0, "~");

  vector<int> dp(n + 1);
  dp[0] = 0;

  int ans = 0;

  for(int i = 0; i <= n; i++) dp[i] = i;

  for(int i = 1; i <= m; i++){
    vector<int> new_dp(n + 1);
    new_dp[0] = dp[0] + 1;
    for(int j = 1; j <= n; j++){
      
      if(b[i] == a[j]){ 
        new_dp[j] = dp[j - 1];
      }
      
      else{
        int c = min(new_dp[j - 1] + 1, dp[j] + 1);
        new_dp[j] = min(c, dp[j - 1] + 1);
      }
    }
    ans += new_dp[n];
    dp = new_dp;
  }

  cout<<ans - dp[n]<<endl;

  return 0;
}