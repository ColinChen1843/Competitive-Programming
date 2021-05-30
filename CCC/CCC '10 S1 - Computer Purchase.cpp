#include <bits/stdc++.h>

using namespace std;

int main() {

  int n;
  cin>>n;
  string computer, ans1, ans2;
  int r, s, d, max1 = 0, max2 = 0;
  for(int i = 0; i < n; i++){
    cin>>computer>>r>>s>>d;
    int ans = 2*r+3*s+d;
    if(ans > max1){
      max2 = max1;
      max1 = ans;
      ans2 = ans1;
      ans1 = computer;
    }
    else if(ans > max2){
      max2 = ans;
      ans2 = computer;
    }
  }

  if(ans1 == ans2){
    cout<<ans1<<endl;
  }
  if(max1 == max2){
    if(ans1 < ans2){
      cout<<ans1<<endl;
      cout<<ans2<<endl;
    }
    else{
      cout<<ans2<<endl;
      cout<<ans1<<endl;
    }
  }
  else{
    cout<<ans1<<endl;
    cout<<ans2<<endl;
  }
    return 0;
}