#include <bits/stdc++.h>

using namespace std;

int main() {
  double n,t,h;
  char a, d;
  cin>>t;

  while(t--){
    cin>>n;
    cin>>h;
    double money;
    if(h > 40) money = (n*40) + (n * 2 * (h - 40));
    else money = n*h;

    cin>>a;
    if(a=='B') money*= 0.9;
    if(a=='C') money*= 0.8;
    if(a=='D') money*= 0.71;
    if(a=='E') money*= 0.65;

    cin>>d;
    if(d == 'y') money -= 10;

    cout<<fixed<<setprecision(2)<<money<<endl;

  }

  return 0;
}