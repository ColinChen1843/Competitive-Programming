#include <iostream>
using namespace std;

int woo(int n, int i){
if(n == 1)
return i;
if(n%2!=0)
return woo(n* 3 + 1,i + 1);
if(n%2==0)
return woo(n/2,i+1);
}
int main()
{
    int n;
    cin>>n;
    int i = 0;
    cout<<woo(n,i);
   return 0;
}