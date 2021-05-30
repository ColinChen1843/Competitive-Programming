#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int g = 5;
    while(g--){
        int n;
        cin>>n;
        int sum = 0;
        for(int c = 2; c<=n;c++){
        int check = 1;
        for(int i = 2; i <= sqrt(c); i++){
            if(c%i==0){
            check = 0;
            break;
        }
        }
        if(check==1)
        sum+=c;
        }
        cout<<sum<<endl;
    }

    return 0;
}