#include <bits/stdc++.h>
using namespace std;
int t, n, b, c, v, t1;
vector<pair<int,int> > parts[6];
int mem[7][1001][3001];
int mems[7][1001][3001] = {false};
int solve(int type, int curr, int budget, int taken){
if(mems[type][curr][budget] != false)
  return mem[type][curr][budget];
mems[type][curr][budget] = true;
  if(taken == t){
    return mem[type][curr][budget] = 0;
  }

  if(curr == parts[type].size()){
  return mem[type][curr][budget] = -1;
  }
  if(budget - parts[type][curr].first < 0){
    return mem[type][curr][budget] = solve(type,curr + 1, budget, taken);
  }
  return mem[type][curr][budget] = max(solve(type,curr + 1, budget, taken),solve(type+1,0,budget - parts[type][curr].first,taken+1) + parts[type][curr].second);
}

int main() {

cin>>t>>n;
for(int i = 0; i < n; i++){
  cin>>c>>v>>t1;
  parts[t1].push_back(make_pair(c,v));
}
cin>>b;
cout << solve(1,0,b,0) << endl;
  return 0;
}