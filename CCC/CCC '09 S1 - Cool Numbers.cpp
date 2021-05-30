#include <iostream>
#include <fstream>
#include<math.h>
using namespace std;

int main()
{
	float a,b;
	cin>>a;
	cin>>b;
    a = pow(a,1.0/6);
    b = pow(b,1.0/6);
    int newb = b;
    int newa = ceil(a);
    int counter = newb - newa + 1; 
    cout<<counter<<endl;
    return 0;
}