#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
   int n,h;
   cin>>n>>h;
   int * cave = new int [h];
   int x;
   int * D = new int [h+1];
    D[0] = cave[0], D[h] = 0; 
    for (int e = 1; e < h; e++) 
        D[e] = cave[e] - cave[e - 1];
        
   for(int i = 0; i<n;i++){
       cin>>x;
       if(i%2==0){
            D[0] += 1; 
            D[x] -= 1; 
       }
       if(i%2!=0){
            D[h-x] += 1; 
            D[h+1] -= 1; 
       }
   }
   cave[0] = D[0];
   for (int e = 1; e < h; e++) { 
           cave[e] = D[e] + cave[e - 1]; 
    }
    sort(cave,cave+h);
    int least = cave[0];
    int i = 0;
    while(i<h){
        if(cave[i]!=least)
        break;
         i++;
    }
    cout<<least<<" "<<i<<endl;
    return 0;
}