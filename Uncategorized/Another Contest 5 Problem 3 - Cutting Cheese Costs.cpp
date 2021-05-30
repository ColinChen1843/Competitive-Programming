#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, k;
    cin>>n>>k;
    long long *p = new long long[n];
    long long*d = new long long [n];
    long long *diff = new long long[n];
    for(int c  = 0; c<n; c++){
        cin>>p[c]>>d[c];
        diff[c] = p[c] - d[c];
    }
    long long sum = 0;
     for(int c = 0; c<n; c++){
        sum = sum+p[c];
    }
   sort(diff,diff+n,greater<int>());
   for(int c=0;c<k;c++){
       sum = sum - diff[c];
   }
    cout<<sum<<endl;
    return 0;
}