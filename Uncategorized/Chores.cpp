#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main() {
    
ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int n;
  cin>>n;
  vector<pair<int,int>> chore(n+1);

  int a, b;

  for(int i = 1; i <= n; i++){
    cin>>a>>b;
    chore[i] = {a, b};
  }

  sort(chore.begin(), chore.end());

  int t = 0, ans = 0, mod = 1000000007;

  for(int i = 1; i <= n; i++){
    int a = chore[i].first, b = chore[i].second;
    ans += (t * b) % mod + (b*(b+1)/2) % mod * a;
    ans %= mod;
    t += (a * b);
    t %= mod;
  }

  cout<<ans % mod<<'\n';

  return 0;
}