#include <bits/stdc++.h>

using namespace std;
int n, input;
vector <int> nums;
int mem[201][201];
int solve(int l, int r){
  if(mem[l][r]!= -1)
    return mem[l][r];
  if(l > r) 
    return mem[l][r] = 0;
  int a = 0;
  for(int i = l; i <= r; i++){
    a = max(a, nums[i] + nums[l - 1] + nums[r + 1] + solve(l, i - 1) + solve(i + 1, r));
  }
  return mem[l][r] = a;
}

int main(){
  while(1){
    memset(mem,-1,sizeof mem);
    nums.clear();
    cin>>n;
    if(n == 0)
      break;
    for(int i = 0; i < n; i++){
      cin>>input;
      nums.push_back(input);
    }
    cout<<solve(1,n-2)<<endl;
  }
    return 0;
}