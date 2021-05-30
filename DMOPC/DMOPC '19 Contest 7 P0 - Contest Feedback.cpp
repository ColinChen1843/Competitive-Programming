#include <bits/stdc++.h>
using namespace std;
int main() {
double a,b,c,d;
cin>>a>>b>>c>>d;
cout<<fixed<<endl;
cout<<setprecision(6)<<(a+b)/2<<endl;
cout<<setprecision(6)<<(a+c)/2<<endl;
cout<<setprecision(6)<<(a+d)/2<<endl;
cout<<setprecision(6)<<(b+c)/2<<endl;
cout<<setprecision(6)<<(b+d)/2<<endl;
cout<<setprecision(6)<<(d+c)/2<<endl;
cout<<setprecision(6)<<(a+b+c)/3<<endl;
cout<<setprecision(6)<<(a+d+b)/3<<endl;
cout<<setprecision(6)<<(a+d+c)/3<<endl;
cout<<setprecision(6)<<(b+d+c)/3<<endl;
cout<<setprecision(6)<<(a+b+d+c)/4<<endl;
  return 0;
}