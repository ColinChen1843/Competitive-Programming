#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long
 
signed main() {

  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
 
  int n;

  cin>>n;

  vector<int> p(n+1), w(n+1), d(n+1);

  for(int i = 1; i <= n; i++){
    cin>>p[i]>>w[i]>>d[i];
  }

  int ans;

  int l = 0, r = 1000000000;

  int mid;

  while(l <= r){

    mid = l + (r - l)/2;

    int a = 0;
    for(int j = 1; j <= n; j++){
      int b = (abs(mid - p[j]) - d[j]);
      if(b > 0){
        a += b * w[j];
      }
    }

    int c = 0;
    for(int j = 1; j <= n; j++){
      int b = (abs(mid + 1 - p[j]) - d[j]);
      if(b > 0){
        c += b * w[j];
      }
    }

    int e = 0;
    for(int j = 1; j <= n; j++){
      int b = (abs(mid - 1 - p[j]) - d[j]);
      if(b > 0){
        e += b * w[j];
      }
    }

    if(mid == 0){
      e = 999999999999999999;
    }
    if(mid == 1000000000){
      c = 999999999999999999;
    }

    if(a <= e && a <= c){
      ans = a;
      break;
    }

    if(a >= c){
      l = mid + 1;
    }

    if(a  >= e){
      r = mid - 1;
    }

  }
  
  cout<<ans<<endl;


  return 0;
}