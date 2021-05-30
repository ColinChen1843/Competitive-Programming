#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int * tides = new int [n]();
    for(int c = 0; c<n; c++){
        cin>>tides[c];
    }
    int * high = new int [n/2]();
    int * low = new int [n - (n/2)]();
    int i, j;  
    
    
    for (i = 0; i < n-1; i++) {   
    for (j = 0; j < n-i-1; j++){  
        if (tides[j] < tides[j+1])  
            swap(tides[j], tides[j+1]);
    }
    }

for(int c = 0; c<n/2; c++){
    high[c] = tides [c];
}

for(int c = n/2, a =0;c<n;a++,c++)
low[a]=tides[c]; 

for (i = 0; i < (n/2)-1; i++) {   
    for (j = 0; j < (n/2)-i-1; j++){  
        if (high[j] > high[j+1])  
            swap(high[j], high[j+1]);
    }
    }
int * order = new int [n]();
for(int c =0; c<n;c++){
    if(c%2==0)
    order[c]=low[c/2];
    if(c%2!=0)
    order[c]=high[c/2];
}
for(int c = 0; c<n; c++)
cout<<order[c]<<" ";
    return 0;
}