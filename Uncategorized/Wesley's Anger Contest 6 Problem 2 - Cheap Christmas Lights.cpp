#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m, x = 0, b;

  cin>>n>>m;

  vector<int> a(200001);

  for(int i = 1; i <= n; i++){
    cin>>a[i];
    if(a[i] == 1){
      x++;
    }
  }

  if(x == 0){
    cout<<0<<endl;
    return 0;
  }

  for(int i = 1; 1; i++){

    cin>>b;
    
    if(a[b] == 1 && i <= m){
      a[b] = 0;
      x--;
    }

    else if(i <= m){
      a[b] = 1;
      x++;
    }

    if(i >= x){
      cout<<i<<endl;
      break;
    }

  }

  return 0;
}