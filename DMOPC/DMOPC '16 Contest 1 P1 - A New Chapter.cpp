#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, d;

  cin>>n;

  int ans = 0;

  for(int i = 0; i < n; i++){
    cin>>d;
    if(d == i) ans++;
    else if(d % 2 == i % 2) ans++;
  }

  cout<<ans<<endl;

  return 0;
}