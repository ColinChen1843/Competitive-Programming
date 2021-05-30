#include <bits/stdc++.h>

using namespace std;
int main() {
  double n, m, p, r;

  cin>>r>>n>>p>>m;

  for(int i = n + 1; i <= m; i++){
    p*= 1 + (r/100);
  }

  cout<<fixed<<setprecision(0)<<p<<endl;

  return 0;
}