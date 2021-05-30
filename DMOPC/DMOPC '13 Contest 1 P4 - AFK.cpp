#include <bits/stdc++.h>

using namespace std;
int t,l,w,cx,cy,wx,wy;
char house[50][50];
bool seen[50][50] = {false};
list <pair<int,int> > q;
int dist[50][50];
int bfs(int cx, int cy){
  seen[cx][cy] = true;
  q.push_back(make_pair(cx,cy));
  while(q.size()>0){
    int a = q.front().first;
    int b = q.front().second;
    q.pop_front();

    if(dist[a][b] == 60)
    return -1;

    if(a == wx && b == wy)
    return dist[a][b];

    if(a+1<w && house[a+1][b] != 'X' && seen[a+1][b] == false){
      dist[a+1][b] = dist[a][b]+1;
      seen[a+1][b] = true;
      q.push_back(make_pair(a+1,b));
    }
        if(a-1>=0 && house[a-1][b] != 'X' && seen[a-1][b] == false){
      dist[a-1][b] = dist[a][b]+1;
      seen[a-1][b] = true;
      q.push_back(make_pair(a-1,b));
    }
        if(b+1<l && house[a][b+1] != 'X' && seen[a][b+1] == false ){
      dist[a][b+1] = dist[a][b]+1;
      seen[a][b+1] = true;
      q.push_back(make_pair(a,b+1));
    }
        if(b-1>=0 && house[a][b-1] != 'X' && seen[a][b-1] == false ){
      dist[a][b-1] = dist[a][b]+1;
      seen[a][b-1] = true;
      q.push_back(make_pair(a,b-1));
    }
  }
  return -1;
}

int main() {
  cin>>t;
  while(t--){
  cin>>l>>w;
  memset(seen,false, sizeof seen);
  memset(dist,0,sizeof dist);
  memset(house,0,sizeof house);

  q.clear();
  for(int i = 0; i < w; i++){
    for(int ii = 0; ii < l; ii++){
      cin>>house[i][ii];
      if(house[i][ii] == 'C'){
        cx = i;
        cy = ii;
    }
    if(house[i][ii] == 'W'){
        wx = i;
        wy = ii;
    }
  }
  }
  int s = bfs(cx,cy);
  if(s == -1)
  cout<<"#notworth"<<endl;
  else
  cout<<s<<endl;
  }
    return 0;
}