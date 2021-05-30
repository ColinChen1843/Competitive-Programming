#include <bits/stdc++.h>

using namespace std;

int v, e, x, y; 
double d, s;
map<int, vector<pair<int, double>>> roads;
bool seen[1001] = {false};
double dist[1001];
int pre[1001];

void solve(){

  for(int i = 0; i <= v; i++){ 
    dist[i] = 999999999;
    pre[i] = 999999999;
  }

  int curr = 1;
  dist[1] = 0;
  pre[1] = 0;

  for(int i = 1; i <= v; i++){
    for(int j = 0; j < roads[curr].size(); j++){

      if(dist[curr] + roads[curr][j].second < dist[roads[curr][j].first]){ 
        dist[roads[curr][j].first] = dist[curr] + roads[curr][j].second;
        pre[roads[curr][j].first] = pre[curr] + 1;
      }

      if(dist[curr] + roads[curr][j].second == dist[roads[curr][j].first] && pre[curr] + 1 < pre[roads[curr][j].first]){ 
      dist[roads[curr][j].first] = dist[curr] + roads[curr][j].second;
      pre[roads[curr][j].first] = pre[curr] + 1;
      }
    }

    seen[curr] = true;
    curr = 0;
    for(int j = 1; j <= v; j++){
      if(seen[j] == false && dist[j] < dist[curr]) curr = j;
    }

  }

}

int main() {
  cin>>v>>e;

  for(int i = 0; i < e; i++){
    cin>>x>>y>>d>>s;
    roads[x].push_back(make_pair(y, (d/s)*60));
    roads[y].push_back(make_pair(x, (d/s)*60));
  }

  solve();

  cout<<pre[v]<<endl;
  double ans = (dist[v]/0.75) - dist[v];
  cout<<round(ans)<<endl;

    return 0;
}