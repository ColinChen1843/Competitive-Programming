#include <bits/stdc++.h>

using namespace std;

int n, t, k, d, x, y, z;
vector<vector<pair<int,int>>> roads;
vector<pair<int,int>> stores;
vector<int> dist(25000000, 999999999);
set<pair<int,int>> q;

void solve(int start){

  int curr = start;
  dist[curr] = 0;
  q.insert({dist[curr], curr});

  while(q.size() > 0){

    curr = q.begin()->second;
    q.erase(q.begin());

    for(int i = 0; i < roads[curr].size(); i++){
      if(dist[curr] + roads[curr][i].second < dist[roads[curr][i].first]){
        dist[roads[curr][i].first] = dist[curr] + roads[curr][i].second;

        q.insert({dist[roads[curr][i].first], roads[curr][i].first});
      }
    }

  }

}

int main() {

  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

  cin>>n>>t;
  roads.resize(n + 1);
  for(int i = 0; i < t; i++){
    cin>>x>>y>>z;
    roads[x].push_back({y,z});
    roads[y].push_back({x,z});
  }

  roads[0].push_back({0,0});

  cin>>k;
  
  for(int i = 0; i < k; i++){
    cin>>x>>y;
    stores.push_back({x,y});
  }

  cin>>d;
  solve(d);

  int ans = 999999999;
  int c;
  for(int i = 0; i < k; i++){
    int a = dist[stores[i].first] + stores[i].second;
    if(a < ans) ans = a;
  }

  cout<<ans<<endl;

    return 0;
}