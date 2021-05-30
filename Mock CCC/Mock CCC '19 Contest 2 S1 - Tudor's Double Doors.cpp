#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main() {

 int x, y;
 cin>>x>>y;
 int ans = x*y;
 
 if(ans % 2 == 0){
   cout<<ans/2<<".0"<<endl;
 }
 else{
   cout<<ans/2<<".5"<<endl;
 }

  return 0;
}