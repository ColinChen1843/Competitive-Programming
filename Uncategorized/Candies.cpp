#include <bits/stdc++.h>

using namespace std;



long long int dp[105][100007];

int main() {
  
  int n, k;

  cin>>n>>k;
  
  vector<int> a(n + 1);

  dp[0][0] = 1;

  for(int i = 1; i <= n; i++) cin>>a[i];

  for(int i = 1; i <= n; i++){

    vector<long long int> sums(k + 1);
    sums[0] = dp[i - 1][0];

    for(int j = 1; j <= k; j++) sums[j] = (sums[j - 1] + dp[i-1][j]) % 1000000007;

    for(int j = 0; j <= k; j++){
      if(j <= a[i]) dp[i][j] = sums[j];
      else{
        dp[i][j] = (sums[j] - sums[j - a[i] - 1] + 1000000007) % 1000000007;
      }
    }
    sums.clear();
  }

  cout<<dp[n][k]<<endl;

    return 0;
}