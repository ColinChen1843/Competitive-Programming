#include <bits/stdc++.h>

using namespace std;
int n, k, input;
vector<int> stones;

int main() {
  cin>>n>>k;
  stones.push_back(0);
  for(int i = 0; i < n; i++){
    cin>>input;
    stones.push_back(input);
  }
  int dp[100001];
  for(int i = 2; i <= n; i++)
  dp[i] = 999999999;

  dp[1] = 0;

  for(int i = 2; i <= n; i++){
    for(int ii = 1; ii <= k; ii++){
      if(i - ii >= 1)
      dp[i] = min(dp[i], dp[i - ii] + abs(stones[i] - stones[i-ii]));
    }
  }
  cout<<dp[n]<<endl;
    return 0;
}