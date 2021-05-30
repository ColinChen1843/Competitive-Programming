#include <bits/stdc++.h>

using namespace std;
map <int,vector<int> > halls;
int n,m,t,u,a,b;
bool seen[1001] = {false};
int distances[1001][1001] = {0};
list<int> q;
int bfs(int r){
  seen[r] = true;
  q.push_back(r);
  while(q.size()>0){
    int curr = q.front();
    q.pop_front();
    for(int i = 0; i < halls[curr].size(); i++){
      if(seen[halls[curr][i]] == false){
      seen[halls[curr][i]] = true;
      q.push_back(halls[curr][i]);
      distances[r][halls[curr][i]] = distances[r][curr] + t;
      }
    }
  }
  return 0;
}
 
int main() {
  cin>>n>>m>>t;
for(int i = 0; i < m; i++){
  cin>>a>>b;
  halls[a].push_back(b);
}
for(int i = 1; i <= n; i++){
  bfs(i);
  memset(seen, false, sizeof seen);
  q.clear();
}
cin>>u;
for(int i = 0; i < u; i++){
  cin>>a>>b;
  if(distances[a][b] != 0)
  cout<<distances[a][b]<<endl;
  else
  cout<<"Not enough hallways!"<<endl;
}
    return 0;
}