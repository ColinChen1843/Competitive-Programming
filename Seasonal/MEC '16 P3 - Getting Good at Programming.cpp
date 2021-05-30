#include <bits/stdc++.h>
using namespace std;

int n, t, input1, input2, a;
vector<vector<int>> skills;
vector<int> temp;

int main(){
temp.push_back(0);
skills.push_back(temp);
temp.clear();
  int dp[101][101];
  cin>>n>>t;
  for(int i = 1; i <= n; i++){
    cin>>a;
    temp.push_back(a);
    for(int ii = 1; ii <= a; ii++){
      cin>>input1>>input2;
      temp.push_back(input1);
      temp.push_back(input2);
    }
    skills.push_back(temp);
    temp.clear();
  }

  memset(dp, 0 , sizeof dp);
  dp[0][0] = 0;
  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= t; j++){
      int time = 0, value = 0;
      for(int k = 0; k < skills[i][0]; k++){
        time += skills[i][(k*2) + 1], value += skills[i][(k*2) + 2];
        int current;
        if(j - time >= 0) current = max(dp[i - 1][j], dp[i - 1][j - time] + value);
        else current = dp[i - 1][j];
        dp[i][j] = max(dp[i][j], current);
      }
    }
  }

  int max = 0;
  for(int i = 1; i <= t; i++){
    if(dp[n][i] > max) max = dp[n][i];
  }
  cout<<max<<endl;

  return 0;
}