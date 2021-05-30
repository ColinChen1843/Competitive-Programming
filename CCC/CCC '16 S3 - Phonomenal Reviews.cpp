#include <bits/stdc++.h>

using namespace std;

int n, m, x, y;

vector<set<int>> roads;
vector<int> leaves;
bool pho[100001] = {false};
int dist[100001] = {0};

list<int> q;
bool seen[100001];

void prune(){
  while(q.size() > 0){
    
    int curr = q.front();
    q.pop_front();

    for(auto i: roads[curr]){
      if(pho[i] == false && roads[i].size() == 2){
        q.push_back(i);
      }
      roads[i].erase(roads[i].find(curr));
    }
    roads[curr].clear();
  }
}

int bfs(int start){
  
  q.push_back(start);
  seen[start] = true;
  int last;

  while(q.size() > 0){

    int curr = q.front();
    q.pop_front();
    
    for(auto i: roads[curr]){
      if(seen[i] == false){
        seen[i] = true;
        q.push_back(i);
      }
    }
    last = curr;
  }
  return last;
}

void bfs2(int start){
  
  q.push_back(start);
  seen[start] = true;
  while(q.size() > 0){

    int curr = q.front();
    q.pop_front();

    for(auto i: roads[curr]){
      if(!seen[i]){
        dist[i] = dist[curr] + 1;
        seen[i] = true;
        q.push_back(i);
      }
    }
  }
}

int main() {

  cin>>n>>m;

  roads.resize(n + 1);
  int z;
  for(int i = 1; i <= m; i++){
    cin>>z;
    pho[z] = true;
  }

  for(int i = 0; i < n - 1; i++){
    cin>>x>>y;
    roads[x].insert(y);
    roads[y].insert(x);
  }

  for(int i = 0; i < n; i++){
    if(roads[i].size() == 1 && pho[i] == false) q.push_back(i);
  }

  prune();

  int end1 = bfs(z);
  memset(seen, false, sizeof seen);
  int end2 = bfs(end1);
  int paths = 0;
  memset(seen, false, sizeof seen);

  bfs2(end1);

  for(int i = 0; i < n; i++) paths += roads[i].size();

  int ans = paths - dist[end2];

  cout<<ans<<endl;

    return 0;
}