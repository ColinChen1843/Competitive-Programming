#include <bits/stdc++.h>

using namespace std;
int n, m, l;
vector<vector<pair<int, int>>> adj;
vector<int> radii, diameter, tree;

queue <int> q;
unordered_map<int, bool> seen;
unordered_map<int, int> dist;
unordered_map<int, int> dist2;

void bfs(int start){
  q.push(start);
  dist[start] = 0;
  tree.push_back(start);
  seen[start] = true;
  while(!q.empty()){
    int curr = q.front();
    q.pop();
    for(int i = 0; i < adj[curr].size(); i++){
      if(!seen[adj[curr][i].first]){
        dist[adj[curr][i].first] = dist[curr] + adj[curr][i].second;
        q.push(adj[curr][i].first);
        seen[adj[curr][i].first] = true;
        tree.push_back(adj[curr][i].first);
      }
    }
  }
}

void bfs2(int start){
  unordered_map<int, bool> seen2;
  q.push(start);
  dist2[start] = 0;
  seen2[start] = true;
  while(!q.empty()){
    int curr = q.front();
    q.pop();

    for(int i = 0; i < adj[curr].size(); i++){
      if(!seen2[adj[curr][i].first]){
        dist2[adj[curr][i].first] = dist2[curr] + adj[curr][i].second;
        q.push(adj[curr][i].first);
        seen2[adj[curr][i].first] = true;
      }
    }
  }
}

void bfs3(int start){
  unordered_map<int, bool> seen2;
  q.push(start);
  dist[start] = 0;
  seen2[start] = true;
  while(!q.empty()){
    int curr = q.front();
    q.pop();

    for(int i = 0; i < adj[curr].size(); i++){
      if(!seen2[adj[curr][i].first]){
        dist[adj[curr][i].first] = dist[curr] + adj[curr][i].second;
        q.push(adj[curr][i].first);
        seen2[adj[curr][i].first] = true;
      }
    }
  }
}

int main() {
  
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

  cin>>n>>m>>l;
  int x,y,z;
  int end1, end2;

  adj.resize(n);

  for(int i = 0; i < m; i++){
    cin>>x>>y>>z;
    adj[x].push_back({y,z});
    adj[y].push_back({x,z});
  }

  for(int i  = 0; i < n; i++){
    if(!seen[i]){
      bfs(i);
      int ma = 0, end = i;
      for(int j = 0; j < tree.size(); j++){
        if(dist[tree[j]] > ma){
          ma = dist[tree[j]];
          end = tree[j];
        }
      }

      end1 = end;
      bfs3(end1);

      ma = 0, end = i;
      for(int j = 0; j < tree.size(); j++){
        if(dist[tree[j]] > ma){
          ma = dist[tree[j]];
          end = tree[j];
        }
      }

      end2 = end;
      bfs2(end2);

      int radius = INT_MAX;

      for(int j = 0; j < tree.size(); j++){
          radius = min(radius, max(dist[tree[j]], dist2[tree[j]]));
      }

      radii.push_back(radius);
      diameter.push_back(dist2[end1]);

      tree.clear();
    }
  }


  int ans;
  sort(diameter.begin(), diameter.end());
  sort(radii.begin(), radii.end());
  
  ans = diameter[diameter.size()-1];

  if(radii.size() >= 2){
    ans = max(ans, radii[radii.size()-1] + l + radii[radii.size()-2]);
  }

  if(radii.size() >= 3){
    ans = max(ans, radii[radii.size()-2]+l+l+radii[radii.size()-3]);
  }

  cout<<ans<<endl;

    return 0;
}