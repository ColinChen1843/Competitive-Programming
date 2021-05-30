#include <bits/stdc++.h>
using namespace std;

int n;
vector<vector<pair<int,int>>> adj;

bool seen[500001] = {false};
list<int> q;
int dist[5000001];
int dist2[5000001];

void bfs(int start){
 
  q.push_back(start);

  while(!q.empty()){
    int curr = q.front();
    seen[curr] = true;
    q.pop_front();
    for(int i = 0; i < adj[curr].size(); i++){
      if(!seen[adj[curr][i].first]){
        q.push_back(adj[curr][i].first);
        dist[adj[curr][i].first] = dist[curr] + adj[curr][i].second;
      }
    }
  }
}

void bfs2(int start){
 
  q.push_back(start);

  while(!q.empty()){
    int curr = q.front();
    seen[curr] = true;
    q.pop_front();
    for(int i = 0; i < adj[curr].size(); i++){
      if(!seen[adj[curr][i].first]){
        q.push_back(adj[curr][i].first);
        dist2[adj[curr][i].first] = dist2[curr] + adj[curr][i].second;
      }
    }
  }
}

int main(){
  cin>>n;
  int x, y, w;
  adj.resize(n + 1);

  for(int i = 0; i < n - 1; i++){
    cin>>x>>y>>w;
    adj[x].push_back({y,w});
    adj[y].push_back({x,w});
  }

  bfs(1);
  int end1;
  int dia = 0;
  for(int i = 1; i <= n; i++){
    if(dist[i] > dia){
      end1 = i;
      dia = dist[i];
    }
  }

  memset(seen, false, sizeof seen);
  memset(dist, 0, sizeof dist);
  bfs(end1);

  int end2;
  dia = 0;
  for(int i = 1; i <= n; i++){
    if(dist[i] > dia){
      end2 = i;
      dia = dist[i];
    }
  }

  memset(seen, false, sizeof seen);
  bfs2(end2);

  int radius = 999999999;

  for(int i = 1; i <= n; i++){
    radius = min(radius, max(dist[i], dist2[i]));
  }

  cout<<dia<<endl;
  cout<<radius<<endl;

  return 0;
}