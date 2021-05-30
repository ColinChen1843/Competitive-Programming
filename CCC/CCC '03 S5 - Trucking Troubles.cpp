#include <bits/stdc++.h>

using namespace std;

int c, r, d;
map<int,vector<pair<int,int>>> roads;
int dist[10001];
bool seen[10001] = {false};

void solve() {
  seen[1] = true;
  dist[1] = 999999999;
  int curr = 1;
  for(int i = 0; i < c; i++){
     for(int j = 0; j < roads[curr].size(); j++){
       int bridge = roads[curr][j].second;
       if(bridge < dist[curr]) dist[roads[curr][j].first] = max(bridge, dist[roads[curr][j].first]);
       else dist[roads[curr][j].first] = max(dist[curr], dist[roads[curr][j].first]);
     }

    seen[curr] = true; 
    curr = 0;

     for(int j = 1; j <= c; j++){
       if(dist[j] > dist[curr] && seen[j] == false) curr = j;
     }

  }
}

int main() {

  cin>>c>>r>>d;

  int x, y, z;
  for(int i = 0; i < r; i++){
    cin>>x>>y>>z;
    roads[x].push_back(make_pair(y,z));
    roads[y].push_back(make_pair(x,z));
  }

  solve();

  int input;
  int ans = 999999999;

  for(int i = 0; i < d; i++){
    cin>>input;
    if(dist[input] < ans) ans = dist[input];
  }
  cout<<ans<<endl;

    return 0;
}