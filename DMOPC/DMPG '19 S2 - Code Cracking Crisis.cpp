#include <bits/stdc++.h>
using namespace std;

int main(){
  vector<string> codes(10);
  string e;
  for(int i = 0; i < 10; i++){
    cin>>codes[i];
  }
  cin>>e;

  vector<int> d (e.length());
  d[0] = e[0]-'0';

  for(int i = 1; i < e.length(); i++){
    d[i] = codes[d[i-1]].find(e[i]);
  }

  for(int i = 0; i < d.size(); i++) cout<<d[i];

  return 0;
}