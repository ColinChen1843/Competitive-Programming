#include <bits/stdc++.h>

using namespace std;
long long int n, H;
vector<long long int>g,h,q,t;
int main() {
cin>>n>>H;
g.resize(n + 1);
h.resize(n + 1);
q.resize(n + 1);
t.resize(n + 1);

for(int i = 1; i <= n; i++)
  cin>>g[i]>>h[i]>>q[i]>>t[i];

vector<vector<unsigned long long int>> dp(H + 1,vector<unsigned long long int>(2));
dp[0][0] = 0;
dp[0][1] = 0;
for(int i = 1; i <= n; i++){
  vector <vector<unsigned long long int>> curr_dp(H + 1,vector<unsigned long long int>(2));
  for(int j = 1; j <= H; j++){
    if(j - t[i] >= 0)
    curr_dp[j][1] = max(curr_dp[j - t[i]][1] + q[i], dp[j][0]);
    else
    curr_dp[j][1] = dp[j][0];
    if(j - h[i] >= 0)
    curr_dp[j][0] = max(dp[j][0], curr_dp[j - h[i]][1] + g[i]);
    else
    curr_dp[j][0] = dp[j][0];
  }
  dp = curr_dp;
}
unsigned long long int ans = 0;
for(int i = 1; i <= H; i++){
  if(dp[i][0]>ans)
  ans = dp[i][0];
  }
cout<<ans<<endl;
    return 0;
}