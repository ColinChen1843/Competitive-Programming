#include <iostream>
#include <cmath>
using namespace std;

int main()
{
 int t;
 cin>>t;
 for(int c = 0; c<t;c++){
     int n;
     cin>>n;
     int a , b;
     a = n+1;
     b = n-1;
    while(1){
        int factors = 0;
        for(int c = 2;c<=sqrt(a);c++){
         if(a%c == 0){
            factors++;
             break;
         }
        }
        
        for(int c = 2; c<=sqrt(b); c++){
         if(b % c == 0){
            factors++;
             break;
         }
        }
        
        if(factors == 0)
        break;
        a++;
        b--;
    }
     cout<<a<<" "<<b<<endl;
 }
    return 0;
}