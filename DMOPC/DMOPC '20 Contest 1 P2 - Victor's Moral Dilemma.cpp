#include <bits/stdc++.h>

using namespace std;

int main() {

  int n, d;
  vector<int> a;
  vector<int> sum;

  cin>>n>>d;
  a.resize(n);
  
  for(int i = 0; i < n; i++){
    cin>>a[i];
  }

  int x, l = 0, r = n - 1;

  for(int i = 1; i <= d; i++){
    
    cin>>x;

    int f = 0;
    int s = 0;

    for(int j = l; j <= r; j++){
      if(j < l + x) f += a[j];
      else s += a[j];
    }
    if(f >= s){
      cout<<f<<endl;
      l = l + x;
    }

    else{
      cout<<s<<endl;
      r = l + x - 1;
    }
  
  }

      return 0;
}