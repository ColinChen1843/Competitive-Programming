#include <iostream>
#include <list>
#include <utility>
using namespace std;
int r,c;
int endr, endc;
int board[9][9];
int seen[9][9] = {false};
int distances[9][9];
list<pair<int,int > >q;

int bfs(int r, int c){
seen[r][c] = true;
q.push_back(make_pair(r,c));

while(q.size()>0){
int a = q.front().first;
int b = q.front().second;
q.pop_front();
if(a==endr&&b==endc)
return distances[a][b];
if(a-2>0&&b+1<9&&seen[a-2][b+1]!=true){
q.push_back(make_pair(a-2,b+1));
seen[a-2][b+1] = true;
distances[a-2][b+1] = distances[a][b]+1;
}
if(a-2>0&&b-1>0&&seen[a-2][b-1]!=true){
q.push_back(make_pair(a-2,b-1));
seen[a-2][b-1] = true;
distances[a-2][b-1] = distances[a][b]+1;
}
if(a+2<9&&b+1<9&&seen[a+2][b+1]!=true){
q.push_back(make_pair(a+2,b+1));
seen[a+2][b+1] = true;
distances[a+2][b+1] = distances[a][b]+1;
}
if(a+2<9&&b-1>0&&seen[a+2][b-1]!=true){
q.push_back(make_pair(a+2,b-1));
seen[a+2][b-1] = true;
distances[a+2][b-1] = distances[a][b]+1;
}
if(a-1>0&&b+2<9&&seen[a-1][b+2]!=true){
q.push_back(make_pair(a-1,b+2));
seen[a-1][b+2] = true;
distances[a-1][b+2] = distances[a][b]+1;
}
if(a+1<9&&b+2<9&&seen[a+1][b+2]!=true){
q.push_back(make_pair(a+1,b+2));
seen[a+1][b+2] = true;
distances[a+1][b+2] = distances[a][b]+1;
}
if(a-1>0&&b-2>0&&seen[a-1][b-2]!=true){
q.push_back(make_pair(a-1,b-2));
seen[a-1][b-2] = true;
distances[a-1][b-2] = distances[a][b]+1;
}
if(a+1<9&&b-2>0&&seen[a+1][b-2]!=true){
q.push_back(make_pair(a+1,b-2));
seen[a+1][b-2] = true;
distances[a+1][b-2] = distances[a][b]+1;
}
}
return 0;

}

int main() {
cin>>r>>c;
cin>>endr>>endc;
cout<<bfs(r,c)<<endl;
  return 0;
}