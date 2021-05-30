#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
   int i;
   cin>>i;
   int n;
   cin>>n;
   int j;
   cin>>j;
   int * stations = new int[i];
   int x;
   int start;
   int end;
   int * D = new int [i+1];
    D[0] = stations[0], D[i] = 0; 
    for (int e = 1; e < i; e++) 
        D[e] = stations[e] - stations[e - 1]; 
   for(int c = 0;c<j;c++){
       cin>>start;
       cin>>end;
       cin>>x;
        D[start] += x; 
    D[end + 1] -= x; 
     
   }
   for (int e = 1; e < i; e++) { 
            stations[e] = D[e] + stations[e - 1]; 
    } 
   int c = 0;
   sort(stations,stations+i);
    while(stations[c]<n&&c<i)
        c++;
    cout<<c<<endl;
     
    return 0;
}