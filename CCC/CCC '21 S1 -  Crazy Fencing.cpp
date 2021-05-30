#include <bits/stdc++.h>

using namespace std;

signed main() {

  int n;
  cin>>n;

  vector<int> h(n+2), w(n+1);

  for(int i = 1; i <= n + 1; i++){
    cin>>h[i];
  }

  for(int i = 1; i <= n; i++){
    cin>>w[i];
  }

  int ans = 0;
  bool dec = false;

  for(int i = 1; i <= n; i++){
    ans += (min(h[i], h[i+1]) * w[i]);
    int a = ((abs(h[i] - h[i + 1])) * w[i]);
    if(a % 2 != 0 && !dec){
      ans += a/2;
      dec = true;
    }
    else if(a % 2 != 0 && dec){
      dec = false;
      ans += (a/2) + 1;
    }
    else{
      ans += a/2;
    }

  }


  if(dec == false){
    cout<<ans<<endl;
  }

  else{
    cout<<ans<<".5"<<endl;
  }



  return 0;
}