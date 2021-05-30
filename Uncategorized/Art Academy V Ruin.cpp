#include <bits/stdc++.h>

using namespace std;
int mem[2003][2003];

int n, hx, hy, ax, ay, inp1, inp2;
vector<pair<int,int> > paint;

int solve(int curr, int rest){
  if(mem[curr][rest]!=-1)
  return mem[curr][rest];

  if(curr == n+2){
    return mem[curr][rest] = 0;
  }

  return mem[curr][rest] = min(solve(curr+1, rest) + abs(paint[curr-1].first - paint[curr].first) + abs(paint[curr-1].second - paint[curr].second),solve(curr+1, curr-1) + abs(paint[rest].first - paint[curr].first) + abs(paint[rest].second - paint[curr].second));
}

int main() {
memset(mem,-1,sizeof mem);
cin>>n;
cin>>hx>>hy>>ax>>ay;
paint.push_back(make_pair(hx,hy));
paint.push_back(make_pair(ax,ay));
for(int i = 0; i < n; i++){
  cin>>inp1>>inp2;
  paint.push_back(make_pair(inp1,inp2));
}
cout<<solve(2,0);
    return 0;
}