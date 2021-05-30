#include <iostream>
#include <vector>
#include <list>
#include <utility>
using namespace std;
int t;
int x,y;
char city[20][20];
list<pair<int,int > > q;
int distances[20][20];
int bfs(int r, int c, bool seen[20][20]){
  seen[r][c] = true;
  q.push_back(make_pair(r,c));
  while(q.size()>0){
  int a = q.front().first;
  int b = q.front().second;
  q.pop_front();
  if(a == x-1 && b == y-1)
  return distances[a][b]+1;
  if(city[a][b] == '+'){
    if(a-1>=0&&city[a-1][b]!='*'&&seen[a-1][b] == false){
      q.push_back(make_pair(a-1,b));
      seen[a-1][b] = true;
      distances[a-1][b] = distances[a][b]+1;
    }
      if(a+1<x&&city[a+1][b]!='*'&&seen[a+1][b] == false){
      q.push_back(make_pair(a+1,b));
      seen[a+1][b] = true;
      distances[a+1][b] = distances[a][b]+1;
    }
      if(b-1>=0&&city[a][b-1]!='*'&&seen[a][b-1] == false){
        q.push_back(make_pair(a,b-1));
        seen[a][b-1] = true;
        distances[a][b-1] = distances[a][b]+1;
      }
       if(b+1<y&&city[a][b+1]!='*'&&seen[a][b+1] == false){
        q.push_back(make_pair(a,b+1));
        seen[a][b+1] = true;
        distances[a][b+1] = distances[a][b]+1;
      }

  }
  if(city[a][b] == '-'){
    if(b-1>=0&&city[a][b-1]!='*'&&seen[a][b-1] == false){
        q.push_back(make_pair(a,b-1));
        seen[a][b-1] = true;
        distances[a][b-1] = distances[a][b]+1;
      }
       if(b+1<y&&city[a][b+1]!='*'&&seen[a][b+1] == false){
        q.push_back(make_pair(a,b+1));
        seen[a][b+1] = true;
        distances[a][b+1] = distances[a][b]+1;
      }
  }
  if(city[a][b] == '|'){
    if(a-1>=0&&city[a-1][b]!='*'&&seen[a-1][b] == false){
      q.push_back(make_pair(a-1,b));
      seen[a-1][b] = true;
      distances[a-1][b] = distances[a][b]+1;
    }
      if(a+1<x&&city[a+1][b]!='*'&&seen[a+1][b] == false){
      q.push_back(make_pair(a+1,b));
      seen[a+1][b] = true;
      distances[a+1][b] = distances[a][b]+1;
    }
  }
  }
  return -1;
}

int main() {
cin>>t;
while(t--){
cin>>x>>y;
for(int i = 0; i < x; i++){
  for(int ii = 0; ii< y; ii++)
  cin>>city[i][ii];
}
bool seen[20][20] = {false};
cout<<bfs(0,0,seen)<<endl;
q.clear();
}
  return 0;
}