#include <iostream>
#include <map>
#include <vector>
#include <utility>
#include <list>
using namespace std;
list<char>q;
bool search(char current,map<char, vector<char> > roads,bool seen[1000]){
seen[65] = true;
q.push_back(current);
while(q.size()>0){
  if(q.front()== 'B' ){
    return true;
  }
current = q.front();
q.pop_front();
  for(int i = 0; i < roads[current].size(); i++)
  {
    if(seen[roads[current][i]] == false)
    {
      seen[roads[current][i]] = true;
      q.push_back(roads[current][i]);
    } 
  } 
}
return false;
}

int main() {
  map<char, vector<char> > roads;
  char x,y;
  while(1){
  cin>>x>>y;
  if(x == '*'&&y == '*')
  break;
  roads[x].push_back(y);
  roads[y].push_back(x);
  }
  int count = 0;
char cur = 65;
  for(int i = 0; i < roads.size(); i++){
    for(int c = 0; c < roads[cur].size(); c++){
        bool seen1[1000] = {false};
        map<char, vector<char> > roads1 = roads;
        roads1[cur].erase(roads1[cur].begin()+c);
        if(search('A',roads1,seen1) == false){
        cout<<cur<<roads[cur][c]<<endl;
        count++;
        }
        q.clear();
    }
    cur++;
  } 
cout<<"There are "<<count<<" disconnecting roads."<<endl;
  return 0;
}