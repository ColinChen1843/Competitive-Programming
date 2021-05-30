#include <bits/stdc++.h>

using namespace std;
int n, m;
vector<int> a, b;
int dp[3009][2][109][109];

int solve(int curr, int prev, int least, int most){

  if(dp[curr][prev][least][most] != -1)
    return dp[curr][prev][least][most];

  if(curr == n + 1){

    if(least <= most){

      if(prev == 1)
        return dp[curr][prev][least][most] = solve(curr, 0, least, most - 1) + b[most];
      
      return dp[curr][prev][least][most] = solve(curr, 1, least + 1, most);
    }
    return 0;
  }

  if(prev == 1){

    int ans = max(solve(curr + 1, 1, least, most), solve(curr + 1, 0, least, most) + a[curr]);

    if(least <= most)
      ans = max(ans, solve(curr, 0, least, most - 1) + b[most]);
    
    return dp[curr][prev][least][most] = ans;
  }

  else{

    int ans = solve(curr + 1, 1, least, most);

    if(least <= most) 
      ans = max(solve(curr, 1, least + 1, most), ans);
    
    return dp[curr][prev][least][most] = ans;
  }

}

int main() {
  memset(dp, -1, sizeof dp);
  cin>>n;
  a.resize(n + 1);
  for(int i = 1; i <= n; i++)
    cin>>a[i];

  cin>>m;
  b.resize(m + 1);
  for(int i = 1; i <= m; i++)
    cin>>b[i];
  sort(b.begin(), b.end());

cout<<solve(1, 1, 1, m)<<endl;

    return 0;
}