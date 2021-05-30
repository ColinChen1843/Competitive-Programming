#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main() {

  int s, r;
  cin>>s>>r;
  if(s*s > 3.14*r*r){
    cout<<"SQUARE"<<endl;
  }
  else{
    cout<<"CIRCLE"<<endl;
  }

    return 0;
}