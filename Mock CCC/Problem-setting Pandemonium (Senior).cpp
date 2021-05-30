#include <bits/stdc++.h>

using namespace std;

int main() {

  int n;
  cin>>n;
  int freq[100001] = {0};

  int ans = 0, input;
  for(int i = 0; i < n; i++){
    cin>>input;
    freq[input]++;
    ans = max(ans, freq[input]);
  }

  cout<<ans<<endl;

  return 0;
}