#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main() {

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);cout.tie(NULL);

  int n, p, q;

  cin>>n>>p>>q;

  vector<int> a(n + 1);
  vector<int> ans(n + 1);


  for(int i = 1; i <= n; i++){
    cin>>a[i];
    ans[i] = a[i];
  }

  for(int i =  1; i <= n; i++){
    int last = (q*(n-i+1))/p + (q*(n-i+1) % p != 0);

    if(n - last + 1 > 0){
      ans[i] += 2 * ans[n - last + 1];
    }
    ans[i] %= 1000000007;
    cout<<ans[i]<<" ";

  }

  return 0;
}