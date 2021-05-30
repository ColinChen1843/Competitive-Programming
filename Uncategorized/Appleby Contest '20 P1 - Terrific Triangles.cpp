#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main() {

  int t;
  cin>>t;
  while(t--){
    vector<int> l(3);
    for(int i = 0; i < 3; i++){
      cin>>l[i];
    }

    sort(l.begin(), l.end());

    int l1 = l[0], l2 = l[1], l3 = l[2];

    if(l3*l3 == l1*l1 + l2*l2){
      cout<<"R"<<endl;
    }

    else if(l3*l3 > l1*l1 + l2*l2){
      cout<<"O"<<endl;
    }

    else{
      cout<<"A"<<endl;
    }

  }

  return 0;
}