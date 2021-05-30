#include <bits/stdc++.h>

using namespace std;

#define int long long

vector<int> costs;
vector<int> m, b;
int dp[2000001];

bool valid(int l3, int l2, int l1){
  if((b[l3]-b[l1])/(m[l1]-m[l3]) < (b[l2]-b[l1])/(m[l1]-m[l2])) return true;
  
  return false;
}

void add_line(int M, int B){
  m.push_back(M);
  b.push_back(B);

  while(m.size() >= 3 && valid(m.size()-1, m.size()-2, m.size()-3)){
    m.erase(m.end() - 2);
    b.erase(b.end() - 2);
  }
}

int point;
int solve(int x){
  if(point >= m.size()) point = m.size() - 1;
  while(point < m.size() - 1 && m[point+1]*x+b[point+1] < m[point]*x+b[point]){
    point++;
  }
  return m[point]*x+b[point];
}

signed main() {
  int n, l;
  cin>>n>>l;
  costs.resize(n+1);

  for(int i = 1; i <= n; i++){
    cin>>costs[i];
    costs[i] += costs[i - 1];
  }

  dp[0] = 0;
  dp[1] = (costs[1]-l)*(costs[1]-l);  
  add_line(-2*(1+costs[0] + l), (1+costs[0]+l)*(1+costs[0]+l)+dp[0]);

  for(int i = 2; i <= n; i++){
    dp[i] = (costs[i]-costs[i-1]-l)*(costs[i]-costs[i-1]-l)+dp[i-1];
    dp[i] = min(solve(i+costs[i]) + (i+costs[i])*(i+costs[i]), dp[i]);
    add_line(-2*(i+costs[i-1]+l), (i+costs[i-1]+l)*(i+costs[i-1]+l)+dp[i-1]);
  }

  cout<<dp[n]<<endl;

    return 0;
}