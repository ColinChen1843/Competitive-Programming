#include <bits/stdc++.h>

using namespace std;


char p[3000];
int dp[3001][3001];

int main() {
  int n;
  cin>>n;

  for(int i = 1; i < n; i++) cin>>p[i];

  dp[1][1] = 1;

  for(int i = 2; i <= n; i++){
    vector<long long> sum(n + 1);
    for(int ii = 1; ii <= n; ii++){
      sum[ii] = ((long long) (sum[ii - 1]) + (long long) (dp[i - 1][ii]) % 1000000007);
    }

    for(int pick = 1; pick <= i; pick++){
      int L, R;
      
      if(p[i - 1] == '<'){
        L = 1;
        R = pick - 1;
      }
      else{
        L = pick;
        R = i - 1;
      }

      if(L <= R){
        dp[i][pick] += (((long long) (sum[R]) - (long long) (sum[L - 1])) % 1000000007);
      }
    }
  }

  long long ans = 0;

  for(int i = 1; i <= n; i++){ 
    ans += dp[n][i];
    ans %= 1000000007;
  }

  cout<<ans<<endl;

    return 0;
}