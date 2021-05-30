#include <iostream>
#include <algorithm>
using namespace std;
 long long int mem[100001];
bool mems[100001] = {false};
long long int woo(int n, int k, int fish[], int current){
    if(mems[current] == true)
    return mem[current];

 if(current > n - 1){
mem[current] = 0;
mems[current] = true;
 return 0;
 }
 else{
mem[current] = max(woo(n,k,fish, current + k + 1) + fish[current], woo(n,k, fish, current + 1));
mems[current] = true;
 return mem[current];
 }
}
int main()
{
    int n,k;
    cin>>n>>k;
    int *fish = new int [n];
    for(int i = 0; i < n; i++)
    cin>> fish[i];
    int current = 0;
    cout<<woo(n,k,fish,current);
    return 0;
}