#include <bits/stdc++.h>

using namespace std;
#define int long long
signed main() {

  int n, q;
  cin>>n>>q;
  vector<int> a(n+1), freq(n+1);
  int l, r;

  for(int i = 1; i <= n; i++){
    cin>>a[i];
  }

  for(int i = 0; i < q; i++){
    cin>>l>>r;
    freq[l]++;
    freq[r+1]--;
  }

  for(int i = 1; i <= n; i++){
    freq[i] = freq[i-1] + freq[i];
  }

  sort(freq.begin(), freq.end());
  sort(a.begin(), a.end());

  int ans = 0;

  for(int i = 1; i <= n; i++){
    ans += a[i]* freq[n + 1 - i];
  }

  cout<<ans<<endl;

  return 0;
}