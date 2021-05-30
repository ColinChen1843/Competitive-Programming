#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,f;
    cin>>n;
    vector<int>nums;
    for(int i = 0; i < n; i++){
        cin>>f;
        nums.push_back(f);
    }
    sort(nums.begin(),nums.end());
    for(int i = 0; i < n; i++){
        cout<<nums[i]<<endl;
    }
    return 0;
}