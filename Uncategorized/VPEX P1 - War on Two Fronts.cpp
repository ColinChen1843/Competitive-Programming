#include <bits/stdc++.h>

using namespace std;

int main() {

  int ans1 = 0, ans2 = 0, min1 = INT_MAX, min2 = INT_MAX;
  int x;
  for(int i = 0; i < 5; i++){
    cin>>x;
    if(x < min1) min1 = x;
    ans1 += x;
  }

  ans1 -= min1;

  for(int i = 0; i < 5; i++){
    cin>>x;
    if(x < min2) min2 = x;
    ans2 += x;
  }

  ans2 -= min2;

  cout<<max(ans1, ans2)<<endl;

  return 0;
}