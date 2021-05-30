#include <bits/stdc++.h>

using namespace std;

int main() {
    double n;
    cin>>n;
    int ans = (floor(n/2)+1)*(ceil(n/2)+1);
    cout<<ans<<endl;
    return 0;
}