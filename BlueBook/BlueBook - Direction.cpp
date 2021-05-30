#include <bits/stdc++.h>

using namespace std;

int main() {
  int n,t;
  cin>>t;
  while(t--){
    cin>>n;

    if(n <= 45 || n >= 315) cout<<"N"<<endl;
    else if(n <= 135) cout<<"E"<<endl;
    else if(n <= 225) cout<<"S"<<endl;
    else if(n < 315) cout<<"W"<<endl; 

  }


  return 0;
}