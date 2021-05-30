#include <bits/stdc++.h>

using namespace std;

int main() {
    
  string t;
  cin>>t;
  int n;
  cin>>n;
    
  for(int i = 0; i < n; i++){
    string x;
    cin>>x;
    bool a = true;
    for(int j = 0; j < t.length(); j++){
      if(x.find(t[j]) > x.length()){
        cout<<"no"<<endl;
        a = false;
        break;
      }
    }

    if(a){
      cout<<"yes"<<endl;
    }
        
  }
    
  return 0;
}