#include <bits/stdc++.h>

using namespace std;

int n;
char grid[1007][1007];
long long int dist[1007][1007];

void bfs(){

list<pair<int,int>> q;
q.push_back({1,1});

while(!q.empty()){

  int curr_y = q.front().first, curr_x = q.front().second;

  q.pop_front();

  if(grid[curr_y][curr_x + 1] == '.' && dist[curr_y][curr_x + 1] == -1 && curr_x + 1 <= n){
    q.push_back({curr_y, curr_x + 1});
    dist[curr_y][curr_x + 1] = dist[curr_y][curr_x];
  }

  if(grid[curr_y][curr_x - 1] == '.' && dist[curr_y][curr_x - 1]  == -1 && curr_x - 1 > 0){
    q.push_back({curr_y, curr_x - 1});
    dist[curr_y][curr_x - 1] = dist[curr_y][curr_x] + 1;
  }

  if(grid[curr_y+1][curr_x] == '.' && dist[curr_y+1][curr_x] == -1 && curr_y + 1 <= n){
    q.push_back({curr_y + 1, curr_x});
    dist[curr_y+1][curr_x] = dist[curr_y][curr_x];
  }

}

}

int main() {

  cin>>n;

  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= n; j++){
      cin>>grid[i][j];
    }
  }

  memset(dist, -1, sizeof dist);
  dist[1][1] = 0;
  bfs();

  long long int r = (n-1+dist[n][n])*(n-1+dist[n][n]);
  long long int l = dist[n][n]*dist[n][n];
  long long int d = (n-1)*(n-1);
  long long ans = r+l+d;
  if(dist[n][n] == -1) cout<<-1<<endl;
  else cout<<ans<<endl;

      return 0;
}