#include <bits/stdc++.h>
using namespace std;

int main(){

int n, m;
cin>>n>>m;
int x;
int first[1000001] = {0};
int last[1000001] = {999999999};

for(int i = 1; i <= n; i++){
  cin>>x;
  if(first[x] == 0) first[x] = i;
  last[x] = i;
  
}

int a, b, ans = 0;

for(int i = 0; i < m; i++){
  cin>>a>>b;
  int ans1 = -1;
  if(last[b] != 0 && first[a] != 0) ans1 = last[b] - first[a] + 1;
  if(ans1 > ans) ans = ans1;
}

cout<<ans<<endl;

  return 0;
}