#include <bits/stdc++.h>

using namespace std;

int n, r, s;
vector<string> e;
vector<int> v,a,b;
pair<int, vector<int>> dp[1001][1001];
bool dp_solved[1001][1001];

pair<int, vector<int>> solve(int money, int space){

  if(dp_solved[money][space]) return dp[money][space];

  pair<int, vector<int>> ans;
  ans.first = 0;
  ans.second.resize(n + 1);

  for(int i = 1; i <= n; i++){
    
   if(money - a[i] >= 0 && space - b[i] >= 0) {
    pair<int, vector<int>> curr = solve(money - a[i], space - b[i]); 
    int curr_value = curr.first + v[i];
    if(curr_value > ans.first){
      vector<int> curr_freq = curr.second;
      curr_freq[i]++;
      ans = make_pair(curr_value, curr_freq);
    }
   }
   
  }

  dp_solved[money][space] = true;
  return dp[money][space] = ans;

}

int main() {

  cin>>n>>r>>s;

  v.resize(n + 1);
  a.resize(n + 1);
  b.resize(n + 1);
  e.resize(n + 1);
  
  for(int i = 1; i <= n; i++){ 
    cin>>e[i]>>v[i]>>a[i]>>b[i];
  }

  pair<int,vector<int>>a = solve(r,s);

  cout<<a.first<<endl;

  for(int i = 1; i <= n; i++) 
  cout<<e[i]<<" "<<a.second[i]<<endl;
  

  return 0;
}