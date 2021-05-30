#include <bits/stdc++.h>

using namespace std;

 long long int mem[5001][5001];

int n, inp1, inp2, bes;
vector<pair<int,int> >vote;

long long int solve(int curr,int wes, int bes){
if(mem[curr][wes]!=-1)
return mem[curr][wes];
if(curr == n){
if(wes>bes)
return mem[curr][wes] = 0;
else
return mem[curr][wes] = 999999999999999999;
}
return mem[curr][wes] = min(solve(curr+1,wes+vote[curr].second,bes - vote[curr].second) + vote[curr].first, solve(curr+1,wes,bes));
}

int main() {
  memset(mem,-1,sizeof mem);
  cin>>n;
  for(int i = 0; i < n; i++){
    cin>>inp1>>inp2;
    bes+=inp2;
    inp1 = inp1/2+1;
    vote.push_back(make_pair(inp1,inp2));
  }

  cout<<solve(0,0,bes)<<"\n";
    return 0;
}