#include <iostream>
#include <vector>
using namespace std;
int main() {
int w;
cin>>w;
int n;
cin>>n;
int *cars = new int[n];
for(int i = 0; i < n; i++)
cin>>cars[i];

vector<int> bridge;
int sum = 0;
int count = 0;
for(int i = 0; i < n; i++){
  if(bridge.size()==4){
  sum-=bridge[0];
  bridge.erase(bridge.begin());
  }

  sum+=cars[i];
  bridge.push_back(cars[i]);
  if(sum<=w){
  count++;
  }
  else{
    break;
  }
}
cout<<count<<endl;
  return 0;
}