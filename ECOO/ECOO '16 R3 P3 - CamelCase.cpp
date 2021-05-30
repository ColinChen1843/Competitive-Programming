#include <bits/stdc++.h>

using namespace std;
int n;
string s,t;
map <string, int> words;
int mem[2000][2001];

int solve(string s, int curr){
  if(mem[s.size()][curr] != -1)
  return mem[s.size()][curr];
  if(s.size() == 0)
    return mem[s.size()][curr] = 0;
  if(curr > s.size())
    return mem[s.size()][curr] = 2001;
  if(words.count(s.substr(0,curr)) == 1){
    string s1 = s;
    s1.erase(0,curr);
    return mem[s.size()][curr] = min(solve(s,curr+1),solve(s1,1) + 1);
  }
  return mem[s.size()][curr] = solve(s,curr + 1);
}

int main() {
  cin>>n;

  for(int i = 0; i < n; i++){
    cin>>t;
    words[t] = 0;
  }
  int i = 10;
  while(i--){
    memset(mem,-1,sizeof mem);
    cin>>s;
    cout<<solve(s,1) - 1<<endl;
  }

}