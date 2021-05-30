#include <iostream>

using namespace std;

int main()
{
    int angle1;
    int angle2;
    int angle3;
    cin>>angle1;
    cin>>angle2;
    cin>>angle3;
    int sum = angle1+angle2+angle3;
    if(sum!=180)
    cout<<"Error"<<endl;
    else if(angle1==angle2&&angle2==angle3)
    cout<<"Equilateral"<<endl;
    else if(angle1!=angle2&&angle2!=angle3&&angle1!=angle3)
    cout<<"Scalene"<<endl;
    else if(angle1==angle2&&angle1!=angle3)
    cout<<"Isosceles"<<endl;
    else if(angle1==angle3&&angle1!=angle2)
    cout<<"Isosceles"<<endl;
    else if(angle2==angle3&&angle2!=angle1)
    cout<<"Isosceles"<<endl;
    return 0;
}