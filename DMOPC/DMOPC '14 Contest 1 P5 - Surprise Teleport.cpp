#include <bits/stdc++.h>

using namespace std;
int r,c,p,u,x,y,t,d,f;
char school[1000][1000];
list <pair<int,int> > q;
bool seen[1000][1000] = {false};
int dist[1000][1000];
int tele = -1;

int bfs(int p, int u){
  q.push_back(make_pair(p,u));
  seen[p][u] = true;
  dist[p][u] = 0;
  while(q.size()>0){
    int a = q.front().first;
    int b = q.front().second;
    q.pop_front();

    if(a == x && b == y)
    return dist[a][b];

    if(tele == -1 && school[a][b] == 'T')
    tele = dist[a][b];
    
    if(a + 1 < r && seen[a+1][b] == false &&  school[a+1][b] != 'X'){
      q.push_back(make_pair(a+1,b));
      seen[a+1][b] = true;
      dist[a+1][b] = dist[a][b] + 1;
    }

    if(a - 1 >= 0 && seen[a-1][b] == false &&  school[a-1][b] != 'X'){
      q.push_back(make_pair(a-1,b));
      seen[a-1][b] = true;
      dist[a-1][b] = dist[a][b] + 1;
    }

    if(b + 1 < c && seen[a][b+1] == false &&  school[a][b+1] != 'X'){
      q.push_back(make_pair(a,b+1));
      seen[a][b+1] = true;
      dist[a][b+1] = dist[a][b] + 1;
    }

    if(b - 1 >= 0 && seen[a][b-1] == false &&  school[a][b-1] != 'X'){
      q.push_back(make_pair(a,b-1));
      seen[a][b-1] = true;
      dist[a][b-1] = dist[a][b] + 1;
    }
  }
  return 0;
}

int main() {
  cin>>r>>c>>p>>u>>x>>y;
  for(int i = 0; i < r; i++){
    for(int ii = 0; ii < c; ii++)
    cin>>school[i][ii];
  }
  cin>>t;
  for(int i = 0; i < t; i++){
    cin>>d>>f;
    school[d][f] = 'T';
  }
  int j = bfs(p,u);
  if(tele!=-1)
  cout<<j - tele<<endl;
  else
  cout<<0<<endl;
    return 0;
}