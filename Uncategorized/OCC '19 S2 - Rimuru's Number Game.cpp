#include <bits/stdc++.h>

using namespace std;

string num;

int solve(int curr, int small, int lead){
  if(curr == num.length()){
    if(small == 1 && lead == 0) return 1;
    return 0;
  }

  int ans = 0;

  if(lead == 1) ans += solve(curr + 1, 1, 1);

  if(small == 0){

    if(3 < num[curr] - '0') ans += solve(curr + 1, 1, 0);

    if(2 < num[curr] - '0') ans += solve(curr + 1, 1, 0);
    
    if(3 == num[curr] - '0') ans += solve(curr + 1, 0, 0);

    if(2 == num[curr] - '0') ans += solve(curr + 1, 0, 0);
  }

  else ans += solve(curr + 1, small, 0) + solve(curr + 1, small, 0);

  return ans; 
}

int main() {
  cin>>num;
  int eq = 1;

  for(int i = 0; i < num.length(); i++){
    if(num[i] - '0' != 2 && num[i] - '0' != 3){
      eq = 0;
      break;
    }
  }

  int ans = solve(0, 0, 1);
  if(eq == 1) cout<<ans + 1<<endl;
  else cout<<ans<<endl;
    return 0;
}