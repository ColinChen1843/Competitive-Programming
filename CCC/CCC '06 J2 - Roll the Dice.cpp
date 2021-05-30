#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, k;
    cin>>n>>k;
    int m = min(n,k);
    int a = max(n,k);
    int counter = 0;
    for(int i = m; i > 0; i--){
     if(10-i<=a && 10-i>0)
     counter++;
    }
    if(counter == 1)
    cout<<"There is 1 way to get the sum 10."<<endl;
    else{
        cout<<"There are "<< counter <<" ways to get the sum 10."<<endl;
    }
    return 0;
}