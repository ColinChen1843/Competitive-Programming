#include <iostream>

using namespace std;
int mem[251][251][251];
bool mems[251][251][251] = {false};
    int num_ways( int n, int k, int min){
        if(mems[n][k][min] == false){
        if(n == 0 && k == 0){
        mem[n][k][min] = 1;
        mems[n][k][min] = true;
        return 1;
        }
        else if(n == 0 && k > 0){
        mem[n][k][min] = 0;
        mems[n][k][min] = true;
        return 0;
        }
        else if(n > 0 && k == 0){
        mem[n][k][min] = 0;
        mems[n][k][min] = true;
        return 0;
        }
        else{
            int ways = 0;
        for(int i = min; i<=n;i++){    
          ways+= num_ways(n-i,k-1,i);
          mem[n][k][min] = ways;
        mems[n][k][min] = true;
        }
        
        return ways;
        
        }
        }
        else{
            return mem[n][k][min];
        }
    }

int main()
{
    int k,n;
    cin>>n>>k;
    int min = 1;
    cout<<num_ways(n,k,min)<<endl;

    return 0;
}