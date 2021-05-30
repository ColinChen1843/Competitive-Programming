#include <bits/stdc++.h>

using namespace std;
int n, k, input;
vector<int> stones;

int dp[100000];

int solve(int n){
  dp[0] = 0;
  dp[1] = abs(stones[1] - stones[0]);
  for(int i = 2; i < n; i++){
    dp[i] = min(dp[i-1] + abs(stones[i-1] - stones[i]), dp[i-2] + abs(stones[i-2] - stones[i]));
  }
  return dp[n - 1];
}

int main() {
  cin>>n;
  for(int i = 0; i < n; i++){
    cin>>input;
    stones.push_back(input);
  }
  cout<<solve(n)<<endl;
    return 0;
}