#include <bits/stdc++.h>

using namespace std;

int main() {

  int n, a, b, x;
  bool motel[7001] = {false};

  motel[0] = true;
  motel[990] = true;
  motel[1010] = true;
  motel[1970] = true;
  motel[2030] = true;
  motel[2940] = true;
  motel[3060] = true;
  motel[3930] = true;
  motel[4060] = true;
  motel[4970] = true;
  motel[5030] = true;
  motel[5990] = true;
  motel[6010] = true;
  motel[7000] = true;

  cin>>a>>b>>n;
  
  for(int i = 0; i < n; i++){
    cin>>x;
    motel[x] = true;
  }

  long long int dp[7001];
  dp[0] = 1;

  for(int i = 1; i <= 7000; i++){
    for(int j = a; j <= b; j++){
      if (i - j >= 0){
        if(motel[i] == true && motel[i - j] == true) dp[i] += dp[i - j];
      }
    }
  }

  cout<<dp[7000]<<endl;

    return 0;
}