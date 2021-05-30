#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
int n;
cin>>n;
int *arr = new int [n];
for(int c = 0; c<n; c++)
cin>>arr[c];
sort(arr,arr+n);
int smallest = 99999999;
for(int c = n-1; c>0; c--){
    if(arr[c]-arr[c-1]<smallest)
    smallest = arr[c]-arr[c-1];
}
cout<<smallest<<endl;
    return 0;
}