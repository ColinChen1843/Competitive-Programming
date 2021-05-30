#include <bits/stdc++.h>

using namespace std;
int n, m, k, a, b;
vector<int> stores;
map<int,vector<int>> roads;
list<int> q;
int seen[100001] = {false};
int dist[100001], dists[100001];

int bfs_a(int curr){
  seen[curr] = true;
  q.push_back(curr);
  while(q.size() > 0){
    int x = q.front();
    q.pop_front();
    for(int i = 0; i < roads[x].size(); i++){
      if(seen[roads[x][i]] == false){
        q.push_back(roads[x][i]);
        dist[roads[x][i]] = dist[x] + 1;
        seen[roads[x][i]] = true;
      }
    }
  }
 return 0;
}

int bfs_b(int curr){
  seen[curr] = true;
  q.push_back(curr);
  while(q.size() > 0){
    int x = q.front();
    q.pop_front();
    for(int i = 0; i < roads[x].size(); i++){
      if(seen[roads[x][i]] == false){
        q.push_back(roads[x][i]);
        dists[roads[x][i]] = dists[x] + 1;
        seen[roads[x][i]] = true;
      }
    }
  }
 return 0;
}


int main() {

  cin>>n>>m>>k>>a>>b;
  
  stores.resize(k);
  for(int i = 0; i < k; i++) cin>>stores[i];
  
  int in1, in2;
  for(int i = 0; i < m; i++){
    cin>> in1>>in2;
    roads[in1].push_back(in2);
    roads[in2].push_back(in1);
  }
  bfs_a(a);
  q.clear();
  memset(seen, 0, sizeof seen);
  bfs_b(b);

  int ans = 999999999;

  for(int i = 0; i < k; i++){
    if(dists[stores[i]] + dist[stores[i]] < ans) ans = dists[stores[i]] + dist[stores[i]];
  }

  cout<<ans<<endl;

    return 0;
}