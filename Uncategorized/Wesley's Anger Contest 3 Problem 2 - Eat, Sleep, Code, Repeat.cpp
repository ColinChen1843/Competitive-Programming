#include <iostream>
#include <cmath>
using namespace std;
int main() {
float d,h;
cin>>d;
for(int i = 0; i < d; i++){
cin>>h;
long long int a = round(h/3);
long long int b = a;
long long int c = h-a-b;
long long int t = a*b*c;
cout<<a*b*c<<endl;
}
  return 0;
}