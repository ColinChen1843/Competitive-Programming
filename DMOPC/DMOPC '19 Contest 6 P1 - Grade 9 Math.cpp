#include <bits/stdc++.h>
using namespace std;
int main() {
double a,b,c,d,a1,b1,c1,d1;
double slope1,slope2;
double y,y1;
double x,z;
cin>>a>>b>>c>>d>>a1>>b1>>c1>>d1;

slope1 = (b-d)/(a-c);
slope2 = (b1-d1)/(a1-c1);
if(abs(slope1-slope2)<0.0001)
slope2 = slope1;
y = b - a*slope1;
y1 = b1 - a1*slope2;

if(abs(a-c)<0.0001 && abs(a1-c1)>0.0001){
x = a;
z = x*slope2+y1;
cout<<fixed<<setprecision(6)<<x<<" "<<z<<endl;
}

else if(abs(a1-c1)<0.0001 && abs(a-c)>0.0001){
x = a1;
z = x*slope1+y;
cout<<fixed<<setprecision(6)<<x<<" "<<z<<endl;
}

else if(abs(a1-c1)<0.0001 && abs(a-c)<0.0001){
if(abs(a1-a)>0.001)
cout<<"parallel"<<endl;
else
cout<<"coincident"<<endl;
}

else if(slope1==slope2){
if(abs(y1-y)<0.001)
cout<<"coincident"<<endl;
else
cout<<"parallel"<<endl;
}
else{
x = (y1-y)/(slope1-slope2);
z = slope1*x+y;
cout<<fixed<<setprecision(6)<<x<<" "<<z<<endl;
}


  return 0;
}