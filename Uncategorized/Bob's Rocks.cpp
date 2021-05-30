#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main() {

  int n;
  cin>>n;
  vector<int> freq(51);

  int a;

  for(int i = 1; i <= n; i++){
    cin>>a;
    freq[a]++;
  }

  int m = 0, ans = 0;

  for(int i = 0; i <= 50; i++){
    if(freq[i]*i > m){
      m = freq[i]*i;
      ans = i;
    }
  }

  cout<<ans<<endl;

  return 0;
}