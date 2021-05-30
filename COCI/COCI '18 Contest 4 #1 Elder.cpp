#include <bits/stdc++.h>

using namespace std;
int main() {
  char obey, z1, z2;
  bool owned[1000] = {false};
  int n, count = 1;
  cin>>obey;
  cin>>n;
  owned[obey] = true;
  for(int i = 0; i < n; i++){
    cin>>z1>>z2;
    if(z2 == obey){
      obey = z1;
      if(!owned[obey])count++;
      owned[obey] = true;
    }
  }
  cout<<obey<<endl;
  cout<<count<<endl;
  return 0;
}