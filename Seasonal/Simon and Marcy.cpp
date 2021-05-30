#include <iostream>
#include <algorithm>
using namespace std;
int mem[1001][1001];
bool mems[1001][1001] = {false};
int woo(int m,int princes[],int length[],int cagesleft){
    if(mems[m][cagesleft] == true){
        return mem[m][cagesleft];
    }
    else{
if(cagesleft == 0 || m == 0){
    mems[m][cagesleft] = true;
    mem[m][cagesleft] = 0;
    return 0;
}    
if(length[cagesleft]>m){
    mems[m][cagesleft] = true;
     mem[m][cagesleft] = woo(m,princes,length,cagesleft-1);
    return woo(m,princes,length,cagesleft-1);
}
else{
    mems[m][cagesleft] = true;
     mem[m][cagesleft] = max(woo(m - length[cagesleft],princes,length,cagesleft-1) + princes[cagesleft],woo(m,princes,length,cagesleft-1));
return max(woo(m - length[cagesleft],princes,length,cagesleft-1) + princes[cagesleft],woo(m,princes,length,cagesleft-1));
}
    }  
}
int main()
{
    int c,m;
    cin>>c>>m;
    int *princes = new int[c];
    int * length = new int [c];
    
    for(int i = 0; i < c; i++)
        cin>>princes[i]>>length[i];
        int cagesleft = c;
cout<<woo(m,princes,length,cagesleft)<<endl;    

    return 0;
}