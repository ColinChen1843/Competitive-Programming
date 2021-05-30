#include <bits/stdc++.h>

using namespace std;

int main() {
    long long int n,m;
    cin>>n>>m;
    long long int a = n*m;
    long long int b = n+m;
    long long int c = abs(n-m);
    long long int greatest;
    greatest = max(a,b);
    greatest = max(greatest,c);
    cout<<greatest<<endl;
    return 0;
}