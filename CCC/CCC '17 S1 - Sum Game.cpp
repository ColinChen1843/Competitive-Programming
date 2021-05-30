#include<iostream>
#include <vector>
using namespace std;

int main(){
		int n;
    cin>>n;
    vector<int>swift;
    vector<int>sem;
    int input;
    for(int i = 0; i < n; i++){
      cin>>input;
      swift.push_back(input);
    }
    for(int i = 0; i < n; i++){
      cin>>input;
      sem.push_back(input);
    }
    int sum_sw = 0;
    int sum_se = 0;
    int k = 0;
    for(int i = 0; i<n; i++){
      sum_sw+=swift[i];
      sum_se+=sem[i];
      if(sum_sw == sum_se)
      k = i+1;
    }
    cout<<k<<endl;
return 0;
}