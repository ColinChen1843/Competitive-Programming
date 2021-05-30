#include <bits/stdc++.h>

using namespace std;
long long int n, w, p, c;
char a;
long long int sum[500001];
long long int sumc[500001];
vector<pair<long long int,long long int>>line(n + 1);

int main() {

  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  
  cin>>n>>w;

  long long int dp[500001];
  dp[0] = 0;
  sum[0] = 0;
  sumc[0] = 0;
  for(int i = 1; i <= n; i++){
    cin>>a;
    if(a == 'A'){
      cin>>p>>c;
      line.push_back({p,c});
      int end = line.size() - 1;
      sum[end + 1] = sum[end] + p;
      sumc[end + 1] = sumc[end] + c;
      long long int new_picture = 0;

      if(sum[end + 1] - sum[end] > w) {
        new_picture = 0;
      } else if(sum[end + 1] <= w) {
        new_picture = sumc[end + 1];
      } else {
          int index = lower_bound(sum, sum + end + 1, sum[end + 1] - w) - sum;
          new_picture = sumc[end + 1] - sumc[index];
      }
      dp[end] = max(dp[end - 1], new_picture);
      cout<<dp[end]<<endl;
    }

    else line.pop_back();
    
  }
    return 0;
}