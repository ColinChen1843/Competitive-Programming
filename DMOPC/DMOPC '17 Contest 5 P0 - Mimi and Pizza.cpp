#include <bits/stdc++.h>

using namespace std;

int main() {

  int b, p;
  char x;
  cin>>b>>p>>x;

  if(b >= p * 5){
    if(x == 'Y'){
      cout<<"B"<<endl;
    }
    else{
      cout<<"A"<<endl;
    }
  }
  
  else if(b >= p * 2){
    if(x == 'Y'){
      cout<<"D"<<endl;
    }
    else{
      cout<<"C"<<endl;
    }
  }

  else{
    cout<<"NO PIZZA"<<endl;
  }

    return 0;
}