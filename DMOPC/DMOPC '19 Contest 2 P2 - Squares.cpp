#include <bits/stdc++.h>
using namespace std;

  int main(){
    int n, m;
    cin>>n>>m;
    vector<vector<int>> square(n, vector<int>(m));
    for(int i = 0; i < n; i++){
      for(int j = 0; j < m; j++){
        cin>>square[i][j];
      }
    }
    int dp[500][500];
    dp[0][0] = square[0][0];
    for(int i = 0; i < n; i++){
      for(int j = 0; j < m; j++){
        if( i != 0 || j != 0){
          int a = 999999999, b = 999999999;
          if(i - 1 >= 0) a = dp[i-1][j] + square[i][j];
          if(j - 1 >= 0) b = dp[i][j-1] + square[i][j];
          dp[i][j] = min(a, b);
        }
      }
    }
    cout<<dp[n-1][m-1]<<endl;
    return 0;
  }