#include <bits/stdc++.h>

using namespace std;

int n, k;
vector<int> s, u;
int dp[25][101];

int solve(int i, int space){
  
  if(dp[i][space] != -1) return dp[i][space];

  if(i > n) return dp[i][space] = 0;

  if(space - s[i] < 0) return dp[i][space] = solve(i + 1, space);

  return dp[i][space] = max(solve(i + 1, space - s[i]) + u[i], solve(i + 1, space));

}

int main() {

  int t = 5;
  
  while(t--){

    memset(dp, -1, sizeof dp);

    cin>>k>>n;

    s.resize(n + 1);
    u.resize(n + 1);

    for(int i = 1; i <= n; i++) cin>>s[i]>>u[i];

    cout<<solve(1, k)<<endl;
  }

    return 0;
}