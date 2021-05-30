#include <bits/stdc++.h>

using namespace std;
int main() {
  int n, m;
  cin>>n>>m;
  vector<int> empty(n);
  vector<int> dislike(m);
  for(int i = 0; i < n; i++) cin>>empty[i];

  for(int i = 0; i < m; i++) cin>>dislike[i];
  
  int ans = 0;
  int dist, prev_dist = 0;
  for(int i = 0; i < n; i++){
    dist = 999999999;
    for(int j = 0; j < m; j++){
      dist = min(dist, abs(empty[i] - dislike[j]));
    }
    if(dist > prev_dist){
      prev_dist = dist;
      ans = empty[i];
    }
  }

  cout<<ans<<endl;

  return 0;
}