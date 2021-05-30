#include <bits/stdc++.h>
using namespace std;

  int main(){
    int r1,g1,b1, r, g, b;
    cin>>r>>g>>b;
    cin>>r1>>g1>>b1;
    r = sqrt(r);
    g = sqrt(g);
    b = sqrt(b);
    r1 = sqrt(r1);
    g1 = sqrt(g1);
    b1 = sqrt(b1);

    if(r == r1 && b == b1 && g == g1) cout<<"Dull"<<endl;
    else cout<<"Colourful"<<endl;

    return 0;
  }