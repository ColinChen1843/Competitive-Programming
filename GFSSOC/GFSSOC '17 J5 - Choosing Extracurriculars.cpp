#include <bits/stdc++.h>

using namespace std;

int n;
vector<int> g9, g10, g11, g12;

int dp[100007][2][2][2][2];

int solve(int curr, int nine, int ten, int eleven, int twelve){

  if(dp[curr][nine][ten][eleven][twelve] != -1) return dp[curr][nine][ten][eleven][twelve];

  if(curr > n) return 0;

  int ans = solve(curr + 1, nine, ten, eleven, twelve);

  if(nine == 0)
    ans = max(ans, solve(curr + 1, 1, ten, eleven, twelve) + g9[curr]);

  if(ten == 0)
    ans = max(ans, solve(curr + 1, nine, 1, eleven, twelve) + g10[curr]);
  
  if(eleven == 0)
    ans = max(ans, solve(curr + 1, nine, ten, 1, twelve) + g11[curr]);
  
  if(twelve == 0)
    ans = max(ans, solve(curr + 1, nine, ten, eleven, 1) + g12[curr]);

  return dp[curr][nine][ten][eleven][twelve] = ans;

}

int main() {

  memset(dp, -1, sizeof dp);

  cin>>n;

  g9.resize(n + 1);
  g10.resize(n + 1);
  g11.resize(n + 1);
  g12.resize(n + 1);
  
  for(int i = 1; i <= n; i++)
    cin>>g9[i]>>g10[i]>>g11[i]>>g12[i];

  cout<<solve(1, 0, 0, 0, 0)<<endl;

    return 0;
}