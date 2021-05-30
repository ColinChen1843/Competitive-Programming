#include <bits/stdc++.h>

using namespace std;
int n;
int spots[1000];
int mem[1001][1001];
int solve(int curr, int prev){

  if(mem[curr][prev] != -1)
  return mem[curr][prev];

  if(curr == n-1)
    return mem[curr][prev] = 0;
  
  if(prev == 0 || curr - prev < 0){
  return mem[curr][prev] = solve(curr+prev+1, prev+1) + spots[curr + prev + 1];
  }

  if(curr + prev + 1 > n-1){
  return mem[curr][prev] = solve(curr - prev,prev) + spots[curr - prev];
  }

  return mem[curr][prev] = min(solve(curr - prev,prev) + spots[curr - prev], solve(curr+prev+1, prev+1) + spots[curr+prev+1]);
}

int main() {
  memset(mem,-1,sizeof mem);
  cin>>n;
  for(int i = 0; i < n; i++)
  cin>>spots[i];
  cout<<solve(0,0)<<endl;
    return 0;
}