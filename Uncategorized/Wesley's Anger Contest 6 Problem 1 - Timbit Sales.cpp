#include <bits/stdc++.h>

using namespace std;

int main() {

  int n;
  double p, c;
  cin>>n;
  for(int i = 0; i < n; i++){
    cin>>p>>c;
    double ans = p/(1+c/100);
    cout<<fixed<<setprecision(5)<<ans<<endl;
  }

  return 0;
}