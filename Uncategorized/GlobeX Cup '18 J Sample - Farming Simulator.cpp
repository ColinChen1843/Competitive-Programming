# include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    long long n,m;
    cin>>n>>m;
    long long *farms =  new long long [n];
    long long sum = 0;
    for(int c = 0; c<n;c++){
    cin>>farms[c];
    sum = sum + farms[c];
    }
    sort(farms,farms+n);
    for(int c = 0; c<m; c++){
        sum = sum - farms[c];
    }
    cout<<sum<<endl;
    return 0;
}