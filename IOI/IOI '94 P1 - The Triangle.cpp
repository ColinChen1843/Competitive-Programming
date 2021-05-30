// #include <bits/stdc++.h>
// using namespace std;

// int n;
// int triangle[105][105];
// int dp[105][105];

// int max_sum(int row, int col) {

//   if(dp[row][col] != -1)
//     return dp[row][col];

//   if(row == n)
//     return triangle[row][col];

//   if(col < 1 || col > row)
//     return 0;

//   dp[row][col] = max(
//     max_sum(row+1, col+1),
//     max_sum(row+1, col))+triangle[row][col];
//     return dp[row][col];
// }

// int main()
// {
//   ios_base::sync_with_stdio(false);
//   cin.tie(NULL);
  
//   cin >> n;
    
//   for(int i = 1; i <= n; i++)
//     for(int j = 1; j <= i; j++)
//       cin >> triangle[i][j];

//   cout << max_sum(1, 1) << "\n";

//   return 0;
// }

#include <bits/stdc++.h>

using namespace std;
int n;
int triangle[101][101];
int main() {
  cin>>n;
  for(int i = 1; i <= n; i++){
    for(int ii = 1; ii <= i; ii++){
      cin>>triangle[i][ii];
    }
  }
  int dp[101][101];
  dp[1][1] = triangle[1][1];
  for(int i = 2; i <= n; i++){
    for(int ii = 1; ii <= i; ii++){
      if(ii == 1)
      dp[i][ii] = dp[i - 1][ii] + triangle[i][ii];
      else if(ii == n)
      dp[i][ii] = dp[i - 1][ii - 1] + triangle[i][ii];
      else
      dp[i][ii] = max(dp[i - 1][ii - 1] + triangle[i][ii],dp[i - 1][ii] + triangle[i][ii]);
    }
  }
  int greatest = 0;
  for(int i = 1; i <= n; i++){
    if(dp[n][i] > greatest)
    greatest = dp[n][i];
  }
  cout<<greatest<<endl;
    return 0;
}