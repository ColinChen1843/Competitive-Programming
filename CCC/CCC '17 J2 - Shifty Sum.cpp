#include <iostream>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int sum = 0;
    for(int i = 0; i <= k; i++){
        sum+=n;
        n*=10;
    }
    cout<<sum<<endl;

    return 0;
}