#include <bits/stdc++.h>

using namespace std;
int n,h;
int yard[1501][1501];
list<pair<int,int> > q;
bool seen[1501][1501] = {false};
int bfs(){
q.push_back(make_pair(1,1));
seen[1][1] = true;
while(q.size()>0){
  int a = q.front().first;
  int b = q.front().second;
  q.pop_front();
  if(a == n && b == n)
  return 1;
  if(a+1 <= n && seen[a+1][b] == false && abs(yard[a+1][b] - yard[a][b]) <= h){
    seen[a+1][b] = true;
    q.push_back(make_pair(a+1,b));
  }
   if(b-1 >= 1 && seen[a][b-1] == false && abs(yard[a][b-1] - yard[a][b]) <= h){
    seen[a][b-1] = true;
    q.push_back(make_pair(a,b-1));
  }
   if(a-1 >= 1 && seen[a-1][b] == false && abs(yard[a-1][b] - yard[a][b]) <= h){
    seen[a-1][b] = true;
    q.push_back(make_pair(a-1,b));
  }
   if(b+1 <= n && seen[a][b+1] == false && abs(yard[a][b+1] - yard[a][b]) <= h){
    seen[a][b+1] = true;
    q.push_back(make_pair(a,b+1));
  }
}
return 0;
}

int main() {
  cin>>n>>h;
  for(int i = 1; i <= n; i++){
    for(int ii = 1; ii <= n; ii++)
    cin>>yard[i][ii];
  }
  int x = bfs();
  if(x == 1)
  cout<<"yes"<<endl;
  else
  cout<<"no"<<endl;
    return 0;
}