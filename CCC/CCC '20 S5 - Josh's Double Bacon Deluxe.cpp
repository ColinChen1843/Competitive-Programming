#include <bits/stdc++.h>
using namespace std;

double dp[1000001];

int main() {

  int n;
  cin>>n;
  vector<int> freq(n + 1), b(n + 1), last(n + 1);
  
  for(int i = 1; i <= n; i++) {
    cin>>b[i];
    last[i] = freq[b[i]] + 1;
    freq[b[i]]++;
  }

  dp[n] = (b[n] == b[1]);
  
  vector<int> last_index(n + 1);
  double sums = dp[n];

  for(int i = n - 1; i >= 2; i--) {
    if(b[i] == b[1]) {
      dp[i] = 1;
      sums += 1;
      continue;
    }
    if(last[i] == freq[b[i]]){ 
      last_index[b[i]] = i;
      dp[i] = (1.0 / (double) (n - i + 1.0));
    
        dp[i] += sums * (1.0 / (double) (n - i + 1.0));

    }
    else {
      dp[i] = dp[last_index[b[i]]];
    }
    sums += dp[i];
  }

  double ans = 1.0 / double(n);
  for(int i = 2; i <= n; i++) {
    ans += dp[i] / (double) n;
  }

  cout<<ans<<endl;

    return 0;
}