#include <iostream>
#include <string>
#include <utility>
using namespace std;
int score,m;
string s;
string combos[5];
int point[5];

int scoring(int score, string s){
int wombocombo = 1;
int bigpoints = 0; 
if(0 == s.length())
return score;
for(int i = 0; i < m; i++){
  if(s.find(combos[i]) == 0&&combos[i].length()>wombocombo){
    bigpoints = point[i];
    wombocombo = combos[i].length();
  }
}
s.erase(0,wombocombo);
score+=bigpoints;
return scoring(score,s);
}

int main() {
cin>>s;
cin>>m;
score = s.length();
for(int i = 0; i < m; i++){
cin>>combos[i];
cin>>point[i];
}
cout<<scoring(score,s);
  return 0;
}