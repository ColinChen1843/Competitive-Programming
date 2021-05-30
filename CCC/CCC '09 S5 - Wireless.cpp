#include <bits/stdc++.h>

using namespace std;

int main() {

  int n, m, k;
  cin>>m>>n>>k;
  vector<vector<int>> city(n + 5, vector<int>(m + 5));

  int x, y, b, r;
  for(int i = 0; i < k; i++){
    cin>>x>>y>>r>>b;
    for(int j = 1; j <= n; j++){
      if(r*r - (j-x)*(j-x) < 0){
        continue;
      }
      int left = y - floor(sqrt(r*r - (j-x)*(j-x)));
      int right = y + floor(sqrt(r*r - (j-x)*(j-x)));
      if(left <= 0){
        left = 1;
      }
      if(right > m){
        right = m;
      }
      city[j][left] += b;
      city[j][right + 1] -= b; 
    }
  }

  int max = 0, count = 0;

  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= m; j++){
      city[i][j] += city[i][j-1];
      if(city[i][j] > max){
        count = 1;
        max = city[i][j];
      }
      else if(city[i][j] == max){
        count++;
      }
    }
  }

  cout<<max<<endl;
  cout<<count<<endl;

    return 0;
}