#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main() {

  int n;
  cin>>n;


  int count = 2;
  int add = 3;

  for(int i = 1; 1;i++){

    if(count >= n){
      cout<<i<<endl;
      return 0;
    }

    count += add;

    if(i % 2 == 0){
      add += 2;
    }

  }

  return 0;
}