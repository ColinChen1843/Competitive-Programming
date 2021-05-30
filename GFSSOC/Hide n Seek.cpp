#include <bits/stdc++.h>
using namespace std;

int n,m,t,r,c;
vector<pair<int,int> > friends;
vector <int> fri;
list<pair<int,int> >q;
bool seen[21][21] = {false};
char school[21][21];
int distances[21][21];
int diff[7][7];

int bfs(int r,int c, int d, int g){
  seen[r][c] = true;
  q.push_back(make_pair(r,c));
  while(q.size()>0){
    int a = q.front().first;
    int b = q.front().second;
    q.pop_front();
    if(a == d && b == g){
      return distances[a][b];
    }
    if(seen[a+1][b] == false && school[a+1][b]!='X' && a+1 <= n){
      seen[a+1][b] = true;
      q.push_back(make_pair(a+1,b));
      distances[a+1][b] = distances[a][b]+1;
    }
    if(seen[a-1][b] == false && school[a-1][b]!='X' && a-1 > 0){
      seen[a-1][b] = true;
      q.push_back(make_pair(a-1,b));
      distances[a-1][b] = distances[a][b]+1;
    }
    if(seen[a][b+1] == false && school[a][b+1]!='X' && b+1 <= m){
      seen[a][b+1] = true;
      q.push_back(make_pair(a,b+1));
      distances[a][b+1] = distances[a][b]+1;
    }
    if(seen[a][b-1] == false && school[a][b-1]!='X' && b-1 > 0){
      seen[a][b-1] = true;
      q.push_back(make_pair(a,b-1));
      distances[a][b-1] = distances[a][b]+1;
    }
  }
  return 0;
}

int permutes(int curr, vector<int> friends){
  int smallest = 10000;
  if(friends.size() == 0)
    return 0;
  for(int i = 0; i < friends.size(); i++){
    vector<int> friends1 = friends;
    friends1.erase(friends1.begin()+i);
    int a = permutes(friends[i],friends1) + diff[curr][friends[i]];
    if(a < smallest)
      smallest = a;
  }
  return smallest;
}

int main() {
  cin>>n>>m>>t;
  friends.push_back(make_pair(0,0));
  for(int i = 1; i <= n; i++){
    for(int ii = 1; ii <= m; ii++){
      cin>>school[i][ii];
      if(school[i][ii] == 'G')
        friends[0] = make_pair(i,ii);
      if(school[i][ii] == 'H')
        friends.push_back(make_pair(i,ii));

    }
  }

  for(int i = 0; i <= t; i++){
    for(int ii = 0; ii <= t; ii++){
      if(i!=ii){
        diff[i][ii] = bfs(friends[i].first,friends[i].second,friends[ii].first,friends[ii].second);
        diff[ii][i] = diff[i][ii];
      }
      memset(distances, 0, sizeof(distances));
      memset(seen, false, sizeof(seen));
      q.clear();
    }
  }
  
  for(int i  = 1; i <= t; i++)
    fri.push_back(i);
  cout<<permutes(0,fri);
  return 0;
}