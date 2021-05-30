#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin>>n;
  vector<int> logs(n), saws(n);

  for(int i = 0; i < n; i++) cin>>logs[i];
  for(int i = 0; i < n; i++) cin>>saws[i];

  sort(logs.begin(), logs.end());
  sort(saws.begin(), saws.end(), greater<int>());
  
  long long sum = 0;

  for(int i = 0; i < n; i++) sum += saws[i]* logs[i];

  cout<<sum<<endl; 

    return 0;
}