#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main() {

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, d, k, x, p;
  cin>>n>>d>>k>>x;
  vector<int> a(n);

  for(int i = 0; i < n; i++){
    cin>>a[i];
  }

  cin>>p;

  int use = 0;

  for(int i = 0; i < n; i++){
    while(a[i] >= p){
      a[i] *= (100-x);
      a[i]/=100;
      use++;
    }

    if(use > k){
      cout<<"NO"<<endl;
      return 0;
    }

  }

  cout<<"YES"<<endl;

    return 0;
}