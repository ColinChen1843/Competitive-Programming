#include <bits/stdc++.h>

using namespace std;

#define int long long

int n, c;
vector<vector<char>> rocks;
vector<int> m, b;
int dp[2001][2001];

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

  while(pointer < m.size() - 1 && m[pointer+1]*x+b[pointer+1] < m[pointer]*x+b[pointer]){
    pointer++;
  }

  return m[pointer]*x+b[pointer];

}

signed main() {

  cin>>n>>c;

  rocks.resize(c,vector<char>(n));

  for(int i = 0; i < c; i++){
    for(int j = 0; j < n; j++){
      cin>>rocks[i][j];
    }
  }

  for(int i = 0; i < c; i++){
    dp[i][0] = 0;
    add_line(-2*i, i*i);
  }

  for(int i = 0; i < n; i++){
    pointer = 0;
    for(int j = 0; j < c; j++){
      dp[j][i] = j*j + solve(j);
    }
    m.clear();
    b.clear();
    for(int j = 0; j < c; j++){
      if(rocks[j][i] == '1') add_line(-2*j, dp[j][i] + j*j);
    }
  }

  int ans = 999999999999999999;
  for(int i = 0; i < c; i++){
    if(dp[i][n-1] < ans && rocks[i][n-1] == '1') ans = dp[i][n-1];
  }

  cout<<ans<<endl;

    return 0;
}