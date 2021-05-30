#include <bits/stdc++.h>

using namespace std;

#define int long long

int n, h;
vector<int> criminals;
int dp[100007];
vector<int> m,b;

bool valid(int l3, int l2, int l1){
  
  if((b[l3]-b[l1])*(m[l1]-m[l2]) < (b[l2]-b[l1])*(m[l1]-m[l3])) return true;
  
  else return false;

}

void add_line(int M, int B){
  
  m.push_back(M);
  b.push_back(B);

  while(m.size() >= 3 && valid(m.size()-1, m.size()-2, m.size()-3)){
    m.erase(m.end() - 2);
    b.erase(b.end() - 2);
  }

}

int pointer;

int solve(int x){
  if(pointer >= m.size()) pointer = m.size() - 1;

  while(pointer < m.size() - 1 && m[pointer + 1]*x + b[pointer + 1] < m[pointer]*x + b[pointer]){
    pointer++;
  }
  return m[pointer] * x + b[pointer];
}

signed main() {

  cin>>n>>h;

  criminals.resize(n + 1);

  for(int i = 1; i <= n; i++) cin>>criminals[i];

  dp[1] = h;
  add_line(-2* criminals[1], dp[0] + criminals[1] * criminals[1]);

  for(int i = 2; i <= n; i++){
    dp[i] = h + dp[i - 1];
    dp[i] = min(dp[i], criminals[i] * criminals[i] + h + solve(criminals[i]));
    add_line(-2 * criminals[i], criminals[i] * criminals[i] + dp[i - 1]);
  }

  cout<<dp[n]<<endl;

  return 0;
}