#include <bits/stdc++.h>

using namespace std;

int n;
map<int, vector<int>> roads;
bool seen[100001] = {false};
list<int> q;

void bfs(int start){
  seen[start] = true;
  q.push_back(start);

  while(q.size() > 0){
    int curr = q.front();
    q.pop_front();

    for(int i = 0; i < roads[curr].size(); i++){
      if(seen[roads[curr][i]] == false){
        seen[roads[curr][i]] = true;
        q.push_back(roads[curr][i]);
      }

    }

  }

}

int main() {

  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t = 2;
  while(t--){
    cin>>n;
    int input;
    for(int i = 1; i <= n; i++){
      cin>>input;
      roads[input].push_back(i);
      roads[i].push_back(input);
    }

    int ans = 0;
  
    for(int i = 1; i <= n; i++){
      if(seen[i] == false){
        bfs(i);
        ans++;
      }
    }

    cout<<ans<<" ";
    q.clear();
    memset(seen, false, sizeof seen);
    roads.clear();

  }
    return 0;
}