#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m;
  cin>>n>>m;
  
  int i = 0, count = 0;
  while(1){
    if(i*i > m){
      break;
    }
    if(i*i >= n){
      count++;
    }
    i++;
  }

  cout<<count<<endl;

    return 0;
}