#include <bits/stdc++.h>

using namespace std;

int n;
vector<int> nums(101);
int dp[101][101];

int gcd(int num_1, int num_2) {
  return num_2 ? gcd(num_2, num_1 % num_2) : num_1;
}

int solve(int l, int r){

  if(dp[l][r] != -1) return dp[l][r];

  if(r == 0) return 0;

  int a = 999999999;
  int g;
  
  if(l + r >= n){

    if(l == 0) g = gcd(nums[n-1], nums[l+r-n]);
    else g = gcd(nums[l-1], nums[l+r-n]);

    for(int i = 0; i < (l + r) - n; i++){
      a = min(a, g + solve(i + 1, l + r - n - 1 - i) + solve(l, i + n - l));
    }

  }

  else if(l == 0) g = gcd(nums[n-1], nums[l+r]);
  else g = gcd(nums[l-1], nums[l+r]);

  for(int i = l; i < min(l + r, n); i++){

    a = min(a, g + solve(i + 1, l + r - 1 - i) + solve(l, i - l));
  
  }
  return dp[l][r] = a;
}

int main() {
  while(1){
    n = 0;
    cin>>n;
    if(n == 0) break;
    for(int i = 0; i < n; i++) cin>>nums[i];
    memset(dp, -1, sizeof dp);

    int ans = solve(1, n - 2) + gcd(nums[0], nums[n - 1]);

    for(int i = -1; i < n-2; i++){
      for(int j = i + 1; j < n-1; j++){
        int g;
        if(i == -1) g = gcd(nums[n-1], nums[j]);
        else g = gcd(nums[i], nums[j]);
        ans = min(ans, solve(j + 1, n-2+i-j+1) + solve(i + 1, j-i-1) + g);
      }
    }
    cout<<ans<<endl;
  }
  return 0;
}