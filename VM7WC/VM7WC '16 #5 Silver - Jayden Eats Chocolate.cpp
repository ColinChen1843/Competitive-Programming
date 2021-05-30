#include <bits/stdc++.h>

using namespace std;
int n, a;
vector<int> pieces;
int main() {
  cin>>n;
  for(int i = 0; i < 3; i++){
    cin>>a;
    pieces.push_back(a);
  }

  int dp[100001];
  for(int i = 1; i <= n; i++){
    dp[i] = -100000;
  }
  dp[0] = 0;
  for(int i = 1; i <= n; i++){
    for(int ii = 0; ii < 3; ii++){
      if(i - pieces[ii] >= 0)
        dp[i] = max(dp[i], dp[i - pieces[ii]] + 1);
    }
  }
  cout<<dp[n]<<endl;
    return 0;
}