#include <bits/stdc++.h>

using namespace std;

int main() {
  int freq[4] = {0};
  int x,y,z;
  cin>>x>>y>>z;

  freq[x]++;
  freq[y]++;
  freq[z]++;
  if(freq[0] == 3||freq[0] == 2) cout<<"YES"<<endl;
  else if(freq[0] == 0) cout<<"NO"<<endl;
  else if(x == 2 && y == 1) cout<<"NO"<<endl;
  else if(x == 3 && z == 1) cout<<"NO"<<endl;
  else if(z == 2 && y == 3) cout<<"NO"<<endl;
  else cout<<"YES"<<endl;

    return 0;
}