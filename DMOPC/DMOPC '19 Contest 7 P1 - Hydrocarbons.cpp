#include <bits/stdc++.h>
using namespace std;
int a,b,c,d,C = 1,H,needed,bonds = 0;
int main() {
  cin>>a>>b>>c>>d;
  C+=a;
  C+=b;
  C+=c;
  needed = 4*C;
  H = d;
  bonds+=d;
  bonds+=a;
  needed-=a;
  bonds+=2*b;
  needed-=b;
  bonds+=3*c;
  needed-=c;

  if(needed == bonds)
  cout<<"C"<<C<<"H"<<H<<endl;
  else
  cout<<"invalid"<<endl;
  return 0;
}