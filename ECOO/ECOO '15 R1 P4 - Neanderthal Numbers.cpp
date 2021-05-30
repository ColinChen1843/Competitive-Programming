#include <bits/stdc++.h>

using namespace std;
string s;
map<string,int> words;
int mem[401];
int solve(int curr){
  if(mem[curr] != -1){
    return mem[curr];
  }

  if(curr >= s.size()){
    return mem[curr] = 1;
  }
  
  int ways = 0;
  for(int i = 1; i <= s.size() - curr; i++){
    if(words.count(s.substr(curr,i)) == 1){
    ways += solve(curr + i);
    }
  } 
  return mem[curr] = ways;
}

int main() {
  words["ook"] = 1;
  words["ookook"] = 2;
  words["oog"] = 3;
  words["ooga"] = 4;
  words["ug"] = 5;
  words["mook"] = 6;
  words["mookmook"] = 7;
  words["oogam"] = 8;
  words["oogum"] = 9;
  words["ugug"] = 10;
  int i = 10;
  while(i--){
    memset(mem,-1,sizeof mem);
    cin>>s;
    cout<<solve(0)<<endl;
  }
  return 0;
}