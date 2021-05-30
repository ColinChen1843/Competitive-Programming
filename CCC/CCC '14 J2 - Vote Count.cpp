#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,a = 0,b = 0;
    char x;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>x;
        if(x == 'A')
        a++;
        if(x == 'B')
        b++;
    }
    if(a>b)
    cout<<"A"<<endl;
    else if(b>a)
    cout<<"B"<<endl;
    else
    cout<<"Tie"<<endl;
    
    return 0;
}