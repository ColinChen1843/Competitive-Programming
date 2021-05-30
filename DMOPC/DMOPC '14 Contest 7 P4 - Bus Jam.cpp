#include <bits/stdc++.h>

using namespace std;
int n, m, h, input;
vector<int> bus;
int main() {
  cin>>n>>m>>h;
  for(int i = 0; i < n; i++){
    cin>>input;
    bus.push_back(input);
  }
  int count = 0;
  bool s = true;
  while(1){
  s = true;
  for(int i = 0; i < n - 1; i++){
    if(bus[i + 1] - bus[i] > h){
      bus[i]+=m;
      count++;
      s = false;
    }
  }
  if(s == true)
  break;
  }
  cout<<count<<endl;
    return 0;
}