#include <bits/stdc++.h>

using namespace std;
int n;
int cards[1001];
int main() {
  cin>>n;
  for(int i = 1; i <= n; i++){
    cin>>cards[i];
  }
  int dp[1001];
  dp[0] = 0;
  memset(dp, 0, sizeof dp);
  for(int i = 1; i <= n; i++){
    for(int ii = 1; ii <= i; ii++){
      dp[i] = max(dp[i], dp[i - ii] + cards[ii]);
    }
  }
  cout<<dp[n]<<endl;
    return 0;
}