#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> a, b;

int dp[100001][3];
bool mems[1000001][3] = {false};

int solve(int curr, int french){
  
  if(mems[curr][french]) return dp[curr][french];

  mems[curr][french] = true;

  if(curr == n) return dp[curr][french] = 0;

  if(french == 2){
    return dp[curr][french] = solve(curr + 1, 0) + b[curr];
  }

  return dp[curr][french] = max(solve(curr + 1, french + 1) + a[curr], solve(curr + 1, 0) + b[curr]);

}

int main(){
  
  cin>>n;

  a.resize(n);
  b.resize(n);

  for(int i = 0; i < n; i++){
    cin>>a[i];
  }

  for(int i = 0; i < n; i++){
    cin>>b[i];
  }

  int ans = solve(0, 0);

  cout<<ans<<endl;

  return 0;
}