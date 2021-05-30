#include <bits/stdc++.h>
using namespace std;

  int main(){
    int n;
    cin>>n;
    vector<double> nums(n+1);
    nums[0] = 0;
    for(int i = 1; i <= n; i++){
     cin>>nums[i];
    }
    sort(nums.begin(), nums.end());

    double ma = nums[n];
    double mi = nums[1];
    double q1, q2, q3;
    if(n % 2 == 0){
      q2 = (nums[n/2] + nums[(n/2)+1])/2; 
    }

    else{
      q2 = nums[(n/2)+1];
    }

    if(n/2 % 2 == 0){
      q1 = (nums[n/4+1]+nums[n/4])/2;
      q3 = (nums[n - (n/4)+1] + nums[n - (n/4)])/2;
    }
    else{
      q1 = nums[n/4+1];
      q3 = nums[n - (n/4)];
    }

    cout<<fixed<<setprecision(6)<<mi<<" "<<ma<<" "<<q1<<" "<<q2<<" "<<q3<<endl;

    return 0;
  }