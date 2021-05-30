#include <iostream>
#include <fstream>
#include <cmath> 
using namespace std;
 
int main()
{
   int x;
   cin>>x;
   int y;
   cin>>y;
   for(int c = x; c<=y;c++){
   if((c-x)%4==0&&(c-x)%2==0&&(c-x)%3==0&&(c-x)%5==0)
	   cout<<"All positions change in year "<<c<<endl;
   }
}