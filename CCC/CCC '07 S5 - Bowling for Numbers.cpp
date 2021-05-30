#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
long long int mem[30001][501];
bool mems[30001][501] = {false};

long long int woo(int n, int k, int pins[],int current,int w){
    if(mems[current][k] == true)
    return mem[current][k];
    
    int value = 0;
    if(k == 0 || current > n-1){
    mem[current][k] = 0;
    mems[current][k] = true;
    return 0;
    }
    else{
        
        int w_2;
        if (current+w-1>n-1)
           w_2=( n-1)-(current+1);
       else
          w_2=w;
            
        for(int i = current; i < current + w_2; i++){
            if(i<n){
        value+=pins[i];
            }
        else{
        break;
        }
        }
        mem[current][k] = max(woo(n,k - 1,pins,current + w_2, w) + value, woo(n,k,pins,current + 1,w));
        mems[current][k] = true;
        return mem[current][k];
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--){
    int n,k,w;
    cin>>n>>k>>w;
    int *pins = new int [n];
    for(int i = 0; i < n; i++)
    cin>> pins[i];
    int current = 0;
   memset(mem,0,sizeof(mem));
   memset(mems,0,sizeof(mems));
    cout<<woo(n,k,pins,current,w)<<endl;
    }
    return 0;
}