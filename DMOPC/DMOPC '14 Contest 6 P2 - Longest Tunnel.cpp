#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, k, d;

  cin>>n;

  int ans = 0;

  for(int i = 1; i <= n; i++){
    cin>>k>>d;
    if(d - k > ans) ans = d - k;
  }

  cout<<ans<<endl;

  return 0;
}