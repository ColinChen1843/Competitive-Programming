#include <bits/stdc++.h>

using namespace std;

int n, m, d;
unordered_map<int, vector<pair<int,int>>> roads, roads2;
vector<tuple<int,int,int>> secret;

vector<int> dist1(500001, 999999999);
vector<int> dist2(500001, 999999999);
set <pair<int,int>> q;

void solve(){

  dist1[1] = 0;
  int curr = 1;
  q.insert(make_pair(dist1[curr], curr));

  while(q.size() > 0){

    curr = q.begin()->second;
    q.erase(q.begin());


    for(int j = 0; j < roads[curr].size(); j++){
    
      if(dist1[curr] + roads[curr][j].second < dist1[roads[curr][j].first]){
        dist1[roads[curr][j].first] = dist1[curr] + roads[curr][j].second;
        
        q.insert(make_pair(dist1[roads[curr][j].first], roads[curr][j].first));
      }
    
    }

  }
  
}

void solve2(){

  dist2[n] = 0;
  int curr;
  q.insert({dist2[curr], n});

  while(q.size() > 0){

    curr = q.begin()->second;
    q.erase(q.begin());

    for(int j = 0; j < roads2[curr].size(); j++){

      if(dist2[curr] + roads2[curr][j].second < dist2[roads2[curr][j].first]){
        dist2[roads2[curr][j].first] = dist2[curr] + roads2[curr][j].second;

        q.insert(make_pair(dist2[roads2[curr][j].first], roads2[curr][j].first));
      }

    }

  }
  
}

int main() {

  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

  cin>>n>>m;

  int x, y, z;

  for(int i = 0; i < m; i++){
    
    cin>>x>>y>>z;
    roads[x].push_back(make_pair(y,z));
    roads2[y].push_back(make_pair(x,z));

  }

  cin>>d;

  for(int i = 0; i < d; i++){
    cin>>x>>y>>z;
    secret.push_back(make_tuple(x,y,z));
  }

  solve();
  solve2();

  int ans = dist1[n];

  for(int i = 0; i < secret.size(); i++){

    int start = get<0>(secret[i]); 
    int end = get<1>(secret[i]);
    int len = get<2>(secret[i]);

    int ans2 = dist1[start] + dist2[end] + len;

    ans = min(ans, ans2);

  }

  if(ans >= 999999999) cout<<-1<<endl;
  else cout<<ans<<endl;

  return 0;
}