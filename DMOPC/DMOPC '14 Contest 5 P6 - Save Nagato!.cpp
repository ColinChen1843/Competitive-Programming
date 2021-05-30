#include <bits/stdc++.h>

using namespace std;

int n, x, y;
vector<vector<int>> tree;
list<int> q;
bool seen[500001] = {false};
int dist1[500001];
int dist2[500001];

int bfs(int start){
  
  q.push_back(start);
  seen[start] = true;
  int last;

  while(q.size() > 0){

    int curr = q.front();
    q.pop_front();
    
    for(int i = 0; i < tree[curr].size(); i++){
      if(seen[tree[curr][i]] == false){
        seen[tree[curr][i]] = true;
        q.push_back(tree[curr][i]);
      }
    }
    last = curr;
  }
  return last;
}

void bfs2(int start){
  
  q.push_back(start);
  seen[start] = true;
  int last = start;
  while(q.size() > 0){

    int curr = q.front();
    q.pop_front();

    for(int i = 0; i < tree[curr].size(); i++){
      if(seen[tree[curr][i]] != true){
        dist1[tree[curr][i]] = dist1[curr] + 1;
        seen[tree[curr][i]] = true;
        q.push_back(tree[curr][i]);
      }
    }

  }
}

void bfs3(int start){
  
  q.push_back(start);
  seen[start] = true;
  int last = start;
  while(q.size() > 0){

    int curr = q.front();
    q.pop_front();

    for(int i = 0; i < tree[curr].size(); i++){
      if(seen[tree[curr][i]] != true){
        dist2[tree[curr][i]] = dist2[curr] + 1;
        seen[tree[curr][i]] = true;
        q.push_back(tree[curr][i]);
      }
    }

  }
}

int main() {

  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  
  cin>>n;
  tree.resize(n + 1);
  for(int i = 1; i < n; i++){
    cin>>x>>y;
    tree[x].push_back(y);
    tree[y].push_back(x);
  }

  int end1 = bfs(1);
  memset(seen, false, sizeof seen);
  int end2 = bfs(end1);
  memset(seen, false, sizeof seen);
  bfs2(end1);
  memset(seen, false, sizeof seen);
  bfs3(end2);

  for(int i = 1; i <= n; i++) 
    cout<<max(dist1[i] + 1, dist2[i]+ 1)<<endl;

    return 0;
}