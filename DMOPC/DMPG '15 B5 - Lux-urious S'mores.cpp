#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, k, l;
  cin>>n>>k>>l;
  vector<int> intensity(n), variance(n);

  for(int i = 0; i < n; i++){
    cin>>intensity[i];
  }
  variance[0] = max(abs(intensity[0] - intensity[n-1]), abs(intensity[0] - intensity[1]));
  variance[n-1] = max(abs(intensity[0] - intensity[n-1]), abs(intensity[n-2] - intensity[n-1]));
  for(int i = 1; i < n-1; i++){
    variance[i] = max(abs(intensity[i-1]-intensity[i]), abs(intensity[i]-intensity[i+1]));
  }
  int ans = 0;
  for(int i = 0; i < n; i++){
    if(intensity[i] >= k && variance[i] > l) ans++;
    else if(intensity[i] < k && variance[i] <= l) ans++;
  }

  cout<<ans<<endl;

  return 0;
}