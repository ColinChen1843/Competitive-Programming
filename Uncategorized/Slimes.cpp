#include <bits/stdc++.h>

using namespace std;
long long int n, input;
vector< long long int> slimes;
long long int mem[400][400];
long long int sum(int l, int r){
  long long int s = 0;
  for(int i = l; i <= r; i++ )
    s+= slimes[i];
  return s;
}

long long int solve(int l, int r){
  if(mem[l][r] != -1)
    return mem[l][r];
  if(l == r)
    return mem[l][r] = 0;
  long long int a = 999999999999999999;
  for(int i = l; i < r; i++){
    if(i + 1 > n - 1)
    a = min(a, solve(l, i) + sum(l,r));
    else
    a = min(a, solve(i + 1,r) + solve(l,i) + sum(l,r));
  }
  return mem[l][r] = a;
}

int main() {
  cin>>n;
  memset(mem,-1,sizeof mem);
  for(int i  = 0 ; i < n; i++){
    cin>>input;
    slimes.push_back(input);
  }
  cout<<solve(0,n-1)<<endl;
    return 0;
}