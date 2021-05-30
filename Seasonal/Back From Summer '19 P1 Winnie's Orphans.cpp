#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m, x;
  int ans = 999999999;
  int numans = 999999999;
  cin>>n>>m;
  for(int i = 1; i <= n; i++){
    int nums = 0;
    for(int j = 0; j < m; j++){
      cin>>x;
      if(x == 10 || x == 1) nums++;
    }
    if(nums < numans){
      ans = i;
      numans = nums;
    }
  }
  cout<<ans<<endl;
    return 0;
}