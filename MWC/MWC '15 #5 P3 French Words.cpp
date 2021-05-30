#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m;
  cin>>n>>m;
  map<string, int> s, a, d;
  string x;
  for(int i = 0; i < n; i++){
    cin>>x;
    s[x] = 0;
    d[x] = 0;

  }
  for(int i = 0; i < m; i++){
    cin>>x;
    a[x] = 0;
    d[x] = 0;
  }

  cout<<(s.size()+a.size())-d.size()<<endl;

  return 0;
}