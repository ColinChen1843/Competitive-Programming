#include <iostream>
#include <vector>
#include <list>
#include <utility>
#include <algorithm>
using namespace std;
int n,row,col;
vector<int>rooms;
char **house;
bool seen[25][25] = {false};
list < pair< int,int > > q;

int room(int r, int c){
seen[r][c] = true;
q.push_back(make_pair(r,c));
 int size = 1;
while(q.size() > 0){
 pair<int,int> current = q.front();
 int a = current.first;
 int b = current.second;
 q.pop_front();
 if(a-1>=0&&house[a-1][b]!='I'&&seen[a-1][b]==false){
 seen[a-1][b] = true;
 q.push_back(make_pair(a-1,b));
 size++;
 }
 if(a+1<row&&house[a+1][b]!='I'&&seen[a+1][b]==false){
 seen[a+1][b] = true;
 q.push_back(make_pair(a+1,b));
 size++;
 }
 if(b-1>=0&&house[a][b-1]!='I'&&seen[a][b-1]==false){
 seen[a][b-1] = true;
 q.push_back(make_pair(a,b-1));
 size++;
 }
 if(b+1<col&&house[a][b+1]!='I'&&seen[a][b+1]==false){
seen[a][b+1] = true;
q.push_back(make_pair(a,b+1));
size++;
}
}
return size;
}

int main() {
cin>>n>>row>>col;
house = new char*[row];
for(int i = 0; i < row; i++)
    house[i] = new char[col];
for(int i = 0; i < row; i++)
  for(int ii = 0; ii < col; ii++)
  cin>>house[i][ii];
for(int i = 0; i < row; i++){
 for(int ii = 0; ii < col; ii++){
    if(house[i][ii]!='I'&&seen[i][ii]==false)
   rooms.push_back(room(i,ii));
  }
}
sort(rooms.begin(),rooms.end(),greater<int>());
int counter = 0;
for(int i = 0; i < rooms.size(); i++){
  if(n-rooms[i]>=0){
  counter++;
  n-=rooms[i];
  }
  else
    break;
}
if(counter == 1)
cout<<counter<<" room, "<<n<<" square metre(s) left over"<<endl;
else
cout<<counter<<" rooms, "<<n<<" square metre(s) left over"<<endl;

  return 0; 
}