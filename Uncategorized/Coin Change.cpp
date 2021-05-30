#include <bits/stdc++.h>

using namespace std;

int main() {
  int x,n;
  cin>>x>>n;
  vector<int> coins(n);
  for(int i = 0; i < n; i++) cin>>coins[i];

  int dp[10001];
  dp[0] = 0;
  for(int i = 1; i <= x; i++){
    dp[i] = 999999999;
    for(int j = 0; j < n; j++){
      if(i - coins[j] >= 0) dp[i] = min(dp[i], dp[i - coins[j]] + 1);
    }
  }

  cout<<dp[x]<<endl;

    return 0;
}