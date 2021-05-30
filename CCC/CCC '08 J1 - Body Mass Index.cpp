#include <iostream>
using namespace std;
int main(){

double height;
double weight;
cin>>weight;
cin>>height;
double BMI;
BMI = weight/(height*height);

if (BMI > 25)
	cout<<"Overweight"<<endl;
else if (BMI< 18.5)
	cout<<"Underweight"<<endl;
else
	cout<<"Normal weight"<<endl;

return 0;
}