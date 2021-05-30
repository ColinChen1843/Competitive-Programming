#include <bits/stdc++.h>

using namespace std;

int main() {

  int n, k;
  cin>>n>>k;

  int x;
  int ans = 0;
  for(int i = 0; i < n; i++){
    cin>>x;
    if(x <= k) ans += x;
  }

  cout<<ans<<endl;

  return 0;
}