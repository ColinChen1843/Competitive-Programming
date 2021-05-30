#include <bits/stdc++.h>

using namespace std;

int main() {
    int m,d;
    cin>>m>>d;
    if(m > 2)
    cout<<"After"<<endl;
    else if(m<2)
    cout<<"Before"<<endl;
    else if(d > 18)
    cout<<"After"<<endl;
    else if(d < 18)
    cout<<"Before"<<endl;
    else
    cout<<"Special"<<endl;
    return 0;
}