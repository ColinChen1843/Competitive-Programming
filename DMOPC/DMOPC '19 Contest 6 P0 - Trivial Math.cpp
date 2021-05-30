#include <bits/stdc++.h>
using namespace std;
int main() {
 int a,b,c;
 cin>>a>>b>>c;
 bool tri = true;
 if(a>=b+c)
  tri = false;
 if(b>=c+a)
  tri = false;
 if(c>=a+b)
  tri = false;
if(tri == false)
cout<<"no"<<endl;
else
cout<<"yes"<<endl;
  return 0;
}