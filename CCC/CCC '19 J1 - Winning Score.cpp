#include<iostream>;
using namespace std;


int main(){
		int a, b, c, d, e, f;
		cin>> a;
		cin>> b;
		cin>> c;

		cin>> d;
		cin>> e;
		cin>> f;
int apples;
apples = 3*a+2*b+c;
int bananas;
bananas = 3*d+2*e+f;

if(bananas>apples)
	cout<<"B"<<endl;
else if (apples>bananas)
	cout<<"A"<<endl;
else
	cout<<"T"<<endl;
	
return 0;
}