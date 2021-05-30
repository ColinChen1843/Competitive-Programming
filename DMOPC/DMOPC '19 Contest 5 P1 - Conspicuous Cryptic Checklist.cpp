#include <iostream>
#include <string>
using namespace std;
int main() {
  string things,a,b;
  int n,m,t;
  bool check = {true};
  int counter = 0;
  cin>>n>>m;
  for(int i = 0; i < n; i++){
  cin>>a;
  things+=a;
  things+=" ";
  }
  for(int i = 0; i < m; i++){
    cin>>t;
      for(int ii = 0; ii < t; ii++){
        cin>>b;
          if(things.find(b)>99999){
          check = false;
          }
      }
      if(check == true){
        counter++;
      }
      else
      check = true;
  }
  cout<<counter<<endl;
  return 0;
}