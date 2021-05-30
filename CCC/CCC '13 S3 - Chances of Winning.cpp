#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;
int t, g,a,b,s1,s2;
vector<pair<int,int> > score;
int counter = 0;
bool games[5][5] = {false};
vector<pair<int,int> > played;
int first(vector<pair<int,int> > score){
  sort(score.begin()+1,score.end());
  if(score[score.size()-1].second == t&&score[score.size()-1].first>score[score.size()-2].first){
  counter++;
  return counter;
  }
  return 0;
}
int chances(int curr,vector<pair<int,int> > score){
  if(curr == played.size()){
  return first(score);
  }
vector<pair<int,int> > win = score;
vector<pair<int,int> > lose = score;
vector<pair<int,int> > tie = score;
win[played[curr].first].first+=3;
lose[played[curr].second].first+=3;
tie[played[curr].first].first+=1;
tie[played[curr].second].first+=1;
chances(curr+1,win);
chances(curr+1,lose);
chances(curr+1,tie);

return counter;
}
int main() {
  score.push_back(make_pair(0,0));
  for(int i = 1; i < 5; i++)
  score.push_back(make_pair(0,i));
cin>>t>>g;
for(int i = 0; i < g; i++){
cin>>a>>b>>s1>>s2;
games[a][b] = true;
games[b][a] = true;
if(s1>s2)
  score[a].first+=3;
if(s2>s1)
score[b].first+=3;
if(s2==s1){
  score[a].first++;
  score[b].first++;
}
}
for(int i = 1; i < 5; i++){
  for(int ii = 1; ii < 5;ii++){
      if(i!=ii&&games[i][ii] == false){
        played.push_back(make_pair(i,ii));
        games[i][ii] = true;
        games[ii][i] = true;
      }
  }
}
cout<<chances(0,score)<<endl;
  return 0;
}