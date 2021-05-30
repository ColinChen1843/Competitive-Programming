#include <bits/stdc++.h>

using namespace std;
#define int long long
signed main() {

  int n;
  cin>>n;
  map<int, vector<int>> line;
  map<pair<int, int>, int> a;
  int m , b;
  int ans = (n * (n-1))/2;
  for(int i = 1; i <= n; i++){
    cin>>m>>b;

    a[{m, b}]++;
    line[m].push_back(b);

  }

  for(auto i : a){
    if(i.second > 1){
      ans += ((i.second-1)*(i.second)/2);
    }
  }

  for(auto i : line){
    if(i.second.size() > 1){
      ans -= ((i.second.size()-1)*(i.second.size()))/2;
    }
  }

  cout<<ans<<endl;

    return 0;
}