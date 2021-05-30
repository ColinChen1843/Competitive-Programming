#include <iostream>
#include <cmath>
using namespace std;

int gcd(int n){
for(int i = 3; i <= n; i+=2){
if(n%i==0 && (n-i)%i==0)
return n/i;
}
}

int solitaire(int n, int cost){
if(n==1)
return cost;
if(n%2==0)
return solitaire(n/2,cost+1);

else{
  int a = gcd(n);
return solitaire(n-a, cost + (n-a)/a);
}
}
int main() {
int n;
cin>>n;
cout<<solitaire(n,0);
return 0;
}