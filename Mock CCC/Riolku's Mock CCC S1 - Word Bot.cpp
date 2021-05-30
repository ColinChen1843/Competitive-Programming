#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main() {

  int n, C, V;
  cin>>n>>C>>V;
  string s;
  cin>>s;

  int c = 0, v = 0;

  for(int i = 0; i < n; i++){
    if(s[i] == 'a' || s[i] == 'e' ||s[i] == 'i' ||s[i] == 'o' ||s[i] == 'u'){
      v++;
      c = 0;
    }
    else if(s[i] == 'y'){
      v++;
      c++;
    }
    else{
      c++;
      v = 0;
    }
    if(c > C){
      cout<<"NO"<<endl;
      return 0;
    }
    if(v > V){
      cout<<"NO"<<endl;
      return 0;
    }
  }

  cout<<"YES"<<endl;

  return 0;
}