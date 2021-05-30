#include <iostream>

using namespace std;

int main()
{
 int a,b,c,d;
 cin>>a;
 cin>>b;
 cin>>c;
 cin>>d;
 int g = 0;
 if(a!=8&&a!=9)
 g = 1;
 if(b!=c)
 g=1;
  if(d!=8&&d!=9)
 g = 1;
   if(g==1)
   cout<<"answer"<<endl;
   else if(g==0)
   cout<<"ignore"<<endl;
    return 0;
}