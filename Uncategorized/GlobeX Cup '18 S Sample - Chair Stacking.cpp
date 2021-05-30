#include <bits/stdc++.h>

using namespace std;
long long int n, input,inp, median, medy, sum = 0;
vector<long long int>chairs;
vector<long long int> y;
int main() {
  cin>>n;
  for(long long int i = 0; i < n; i++){
    cin>>input>>inp;
    chairs.push_back(input);
    y.push_back(inp);
  }
  sort(chairs.begin(), chairs.end());
  sort(y.begin(), y.end());
  if(n % 2 == 1){
  medy = y[n/2];
  median = chairs[n/2];
  }
  if(n % 2 == 0){
  medy = (y[n/2] + y[n/2 - 1]) / 2;
  median = (chairs[n/2] + chairs[n/2 - 1]) / 2;
  }
  for(long long int i = 0; i < n; i++){
    sum += abs(median - chairs[i]);
    sum += abs(medy - y[i]);
  }
  cout<<sum<<endl;
    return 0;
}