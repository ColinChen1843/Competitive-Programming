#include <bits/stdc++.h>

using namespace std;
int main() {
  int n;
  cin>>n;
  vector<double> nums(n);
  double greatest = 0;
  int index;
  for(int i = 0; i < n; i++){
    cin>>nums[i];
    if(nums[i] > greatest){
      greatest = nums[i];
      index = i;
    }
  }
  for(int i = 0; i < n; i++){ 
    if(i != index) cout<<fixed<<setprecision(2)<<nums[i]<<endl;
  }
  cout<<fixed<<setprecision(2)<<nums[index]<<endl;
  return 0;
}