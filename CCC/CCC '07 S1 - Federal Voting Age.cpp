#include <iostream>

using namespace std;

int main()
{
int n;
cin>>n;
int y,m,d;
for(int c = 0; c<n; c++){
    cin>>y;
    cin>>m;
    cin>>d;
    if(2007 - y > 18)
    cout<<"Yes"<<endl;
    else if(2007-y<18)
    cout<<"No"<<endl;
    else if(m<2)
    cout<<"Yes"<<endl;
    else if(m>2)
    cout<<"No"<<endl;
    else if(d<=27)
    cout<<"Yes"<<endl;
    else if (d>27)
    cout<<"No"<<endl;
    
}
    return 0;
}