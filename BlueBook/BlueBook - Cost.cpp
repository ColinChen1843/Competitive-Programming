#include <bits/stdc++.h>

using namespace std;

int main() {
  int n,t;
  cin>>t;
  while(t--){

    cin>>n;
    if(n <= 30) cout<<38<<endl;
    else if(n <= 50) cout<<55<<endl;
    else if(n <= 100) cout<<73<<endl;
    else{
      double extra = n - 100;
      cout<<24*ceil(extra/50) + 73<<endl;
    }

  }


  return 0;
}