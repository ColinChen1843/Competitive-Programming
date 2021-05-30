#include <iostream>
#include <string>
using namespace std;
 int main()
 {
   int c,r,x,y;
   cin>>c;
   cin>>r;
   x = 0;
   y = 0;
   int a,b;
   int q = 0;
   while(q == 0){
   cin>>a;
   cin>>b;
   if(a == 0 && b == 0)
   q++;
   else{
       x = x + a;
       y = y + b;
       if(x>c)
       x=c;
       if(x<0)
       x=0;
       if(y>r)
       y=r;
       if(y<0)
       y=0;
       cout<<x<<" "<<y<<endl;
   }
   }
 return 0;
    }