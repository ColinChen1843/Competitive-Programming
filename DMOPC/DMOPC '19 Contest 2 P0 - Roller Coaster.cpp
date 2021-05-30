#include <iostream>

using namespace std;

int main()
{
    int n,max,min;
    cin>>n>>min>>max;
    int *arr = new int[n];
    for(int c = 0; c<n; c++){
        cin>>arr[c];
    }
    int counter = 0;
    for(int c = 0; c<n; c++){
        if(arr[c]<=max&&arr[c]>=min){
            counter++;
        }
        
    }
    cout<<counter<<endl;
    return 0;
}