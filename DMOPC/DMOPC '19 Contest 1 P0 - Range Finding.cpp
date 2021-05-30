#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int *numbers = new int [n];
    int biggest = -1000000000;
    int smallest = 1000000000;
    for(int c = 0; c<n; c++){
        cin>>numbers[c];
        if(numbers[c]>biggest)
        biggest = numbers[c];
        if(numbers[c]<smallest)
        smallest = numbers[c];
    }
    int difference = biggest-smallest;
    cout<<difference<<endl;

    return 0;
}