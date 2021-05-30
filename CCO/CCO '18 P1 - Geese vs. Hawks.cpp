#include <bits/stdc++.h>
using namespace std;

string s,t;
int n, input;
vector<int> geese,hawks;
int dp[1001][1001];
int main() {
  cin>>n;
  cin>>s;
  s = 'a' + s;
  geese.push_back(0);
  hawks.push_back(0);
  for(int i = 1; i <= n; i++){
    cin>>input;
    geese.push_back(input);
  }
  cin>>t;
  t = 'a' + t;
  for(int i = 1; i <= n; i++){
    cin>>input;
    hawks.push_back(input);
  }

  for(int i = 1; i <= n; i++){
    for(int ii = 1; ii <= n; ii++){
      dp[i][ii] = max(dp[i - 1][ii], dp[i][ii - 1]);
      if(s[i] != t[ii]){
        if((s[i] == 'W' && geese[i] > hawks[ii]) || (s[i] == 'L' && geese[i] < hawks[ii]))
          dp[i][ii] = max(dp[i][ii], dp[i - 1][ii - 1] + geese[i] + hawks[ii]);
      }
    }
  }
  cout<<dp[n][n]<<endl;

  return 0;
}