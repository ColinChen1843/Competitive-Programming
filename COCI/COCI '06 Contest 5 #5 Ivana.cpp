#include <bits/stdc++.h>

using namespace std;
int n;
vector<int>cards(n + 1);

int dp[101][101];
int mems[101][101] = {false};

int solve(int l, int r){

  if(mems[l][r] == true) return dp[l][r];
  mems[l][r] = true;
  if(l == r){
    if(cards[l] % 2 != 0) return dp[l][r] = 1;
    else return dp[l][r] = 0;
  }
  
  int a, b;
  if(r - 1 < 0) a = solve(r,r) - solve(l,n - 1);
  else a = solve(r,r) - solve(l,r-1);
  if(l + 1 >= n) b = solve(l,l) - solve(0, r);
  else b = solve(l,l) - solve(l + 1, r);
  return dp[l][r] = max(a, b);

}

int main() {

  cin>>n;
  for(int i = 0; i < n; i++){
    cin>>cards[i];
  }

  int ans = 0;

    int a = solve(1, n - 1);
    if(cards[0] % 2 != 0) a--;
    if(a < 0) ans++;

    int b = solve(0, n-2);
    if(cards[n - 1] % 2 != 0) b--;
    if(b < 0) ans++;

    for(int i = 1; i < n - 1; i++){
      int a = solve(i + 1, i - 1);
      if(cards[i] % 2 != 0) a--;
      if(a < 0) ans++; 
    }

  cout<<ans<<endl;

    return 0;
}