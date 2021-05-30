#include <bits/stdc++.h>

using namespace std;

int main() {
  int t = 5;
  while(t--){
    int n;
    cin>>n;
    int ans = 0;
    for(int i = 1; i <= n; i++){
      for(int j = 1; j*j <= i; j++){
        if(i % j == 0){
          ans++;
        }
      }
    }
    cout<<ans<<endl;
  }
  return 0;
}