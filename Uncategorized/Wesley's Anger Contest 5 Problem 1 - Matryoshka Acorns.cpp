#include <bits/stdc++.h>

using namespace std;
int n;
vector<int> acorns;
int main() {
  cin>>n;
  acorns.resize(n);
  for(int i = 0; i < n; i++)
    cin>>acorns[i];

  sort(acorns.begin(), acorns.end());
  int cost = 0;
  while(acorns.size() > 0){
    int big = acorns[acorns.size() - 1];
    cost += big;
    acorns.pop_back();
    for(int i =  acorns.size() - 1; i >= 0; i--){
      if(acorns[i] < big){ 
        big = acorns[i];
        acorns.erase(acorns.begin() + i);
      }
    }
  }
  cout<<cost<<endl;
    return 0;
}