#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m, a, b;
  cin>>n;
  vector<int> flowers(n+1), diff(n+2);
  int ans = 0;
  for(int i = 1; i <= n; i++){
    cin>>flowers[i];
  }

  cin>>m;

  for(int i = 0; i < m; i++){
    cin>>a>>b;
    diff[a] = b;
  }

  for(int i = 1; i <= n; i++){
    
    if(diff[i] != 0){
      if(diff[i] > flowers[i] || diff[i] > flowers[i+1]){
        ans += max(flowers[i], flowers[i+1]);
        i++;
      }
      else ans += flowers[i]-diff[i];
    }
    else ans += flowers[i];

  }

  cout<<ans<<endl;

  return 0;
}