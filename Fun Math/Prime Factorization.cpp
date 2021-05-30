#include <cmath>
#include <iostream>
using namespace std;
void woo(int n){
    int primecheck = 0;
    int divisor;
    for(int i = 2; i<=sqrt(n);i++){
        if(n%i == 0){
            divisor = i;
            primecheck = 1;
            break;
        }
    }
        if(primecheck == 0){
        cout<<n<<" ";
        }
        else{
        woo(divisor);
        woo(n/divisor);
    }
    
}

int main()
{
    int t;
    cin>>t;
    while(t--){
int n;
cin>>n;
woo(n);
cout<<endl;
}
    return 0;
}