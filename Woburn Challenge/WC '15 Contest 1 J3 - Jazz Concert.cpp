#include <bits/stdc++.h>

using namespace std;

int main() {

  int n, max1 = 0, max2 = 0, ans = 10;
  cin>>n; 
  int x;
  for(int i = 0; i < n; i++){
    cin>>x;
    if(x > max1){
      max2 = max1;
      max1 = x;
    }
    else if(x > max2){
      max2 = x;
    }
    ans += x;
  }

  ans += max1 + max2;

  cout<<ans<<endl;

  return 0;
}