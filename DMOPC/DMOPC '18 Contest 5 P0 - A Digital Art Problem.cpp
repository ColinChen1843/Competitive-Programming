#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  double r1,r2,g1,g2,b1,b2;
  cin>>s;
  cin>>r1>>g1>>b1>>r2>>g2>>b2;
  double r,g,b;
  if(s == "Multiply"){
    r = r1*r2;
    g = g1*g2;
    b = b1*b2;
  }
  else if(s == "Screen"){
    r = 1-(1-r1)*(1-r2);
    g = 1-(1-g1)*(1-g2);
    b = 1-(1-b1)*(1-b2);
  }
  else if(s == "Overlay"){
    if(r1 < 0.5) r = 2*r1*r2;
    else r = 1-2*(1-r1)*(1-r2);
    if(g1 < 0.5) g = 2*g1*g2;
    else g = 1-2*(1-g1)*(1-g2);
    if(b1 < 0.5) b = 2*b1*b2;
    else b = 1-2*(1-b1)*(1-b2);
  }

  cout<<fixed<<setprecision(6)<<r<<" "<<g<<" "<<b<<endl;

    return 0;
}