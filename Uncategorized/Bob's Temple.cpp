#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main() {

  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

  int n;
  cin>>n;

  vector<int> freq(1000001);

  int m = 0, a = 0;

  for(int i = 1; i <= n; i++){
    cin>>a;
    if(a > m){
      m = a;
    }
    freq[a]++;
  }

  for(int i = 1; i <= m; i++){
    cout<<i<<" ";
  }

  for(int i = m - 1; i >= 1; i--){
    for(int j = 1; j < freq[i]; j++){
      cout<<i<<" ";
    }
  }

  cout<<'\n';

  return 0;
}