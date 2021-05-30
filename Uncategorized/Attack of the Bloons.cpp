#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main() {

  int t;
  cin>>t;
  while(t--){
    int l, n, m;
    cin>>l>>n;
    vector<int> c(n), r(n), d(n);
    for(int i = 0; i < n; i++){
      cin>>c[i]>>r[i]>> d[i];
    }

    cin>>m;
    int h;

    for(int i = 0; i < m; i++){
      cin>>h;
      for(int j = 1; j <= l + 1; j++){
        for(int k = 0; k < n; k++){
          if(abs(j - c[k]) <= r[k]){
            h -= d[k];
          }
        }

        if(j == l + 1){
          cout<<"Bloon leakage"<<endl;
        }

        else if(h <= 0){
          cout<<j<<endl;
          break;
        }
      }
    }

  }

  return 0;
}