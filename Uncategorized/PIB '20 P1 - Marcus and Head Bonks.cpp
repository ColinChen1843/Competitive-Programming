#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,f,c = 0;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>f;
        if(f>0)
        c++;
    }
    cout<<c<<endl;
    return 0;
}