#include <bits/stdc++.h>

using namespace std;
string k;
long long int n;

long long int dp[101234][2][2][2];

long long int solve(int curr, int small, int one, int ten){

  if(dp[curr][small][one][ten] != -1) return dp[curr][small][one][ten];

  if(curr == n){
    if(ten == 1) return dp[curr][small][one][ten] = 1;
    return dp[curr][small][one][ten] = 0;
  }

  long long int ans = 0;

  for(int i = 0; i < 10; i++){
    
    if(i > k[curr] - '0' && small == 0) break;

    if(i < k[curr] - '0'){

      if(i == 0 && ten == 1) 
        ans += 0;
    
      else if(i == 0 && ten == 0 && one == 1)
        ans += solve(curr + 1, 1, one, 1);

      else if(i == 1)
        ans += solve(curr + 1, 1, 1, ten);

        else ans += solve(curr + 1, 1, one, ten);
    }

    else{

      if(i == 0 && ten == 1) 
        ans += 0;
    
      else if(i == 0 && ten == 0 && one == 1)
        ans += solve(curr + 1, small, one, 1);

      else if(i == 1)
        ans += solve(curr + 1, small, 1, ten);

        else ans += solve(curr + 1, small, one, ten);
    }

  }

  return dp[curr][small][one][ten] = ans % 1000000007;

}

int main() {
  
  memset(dp, -1, sizeof dp);

  cin>>k;

  n = k.length();

  cout<<solve(0, 0, 0, 0)<<endl;

    return 0;
}