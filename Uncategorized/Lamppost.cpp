#include <bits/stdc++.h>

using namespace std;

int main() {

  ios_base::sync_with_stdio(0);
  cin.tie(0), cout.tie(0);

  int n, c, a, b;
  cin>>n>>c;

  vector<int> freq(n+1);
  
  for(int i = 0; i < c; i++){
    cin>>a>>b;
    freq[a]++;
    freq[b]++;
  }

  int ans = 0, max = 0;

  for(int i = 1; i <= n; i++){
    if(freq[i] >= max){ 
      max = freq[i];
      ans = i;
    }
  }

  cout<<ans<<endl;

    return 0;
}