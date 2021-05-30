#include <iostream>
#include <algorithm>
using namespace std;
int mem[301][101][151];
bool mems[301][101][151] = {false};
int woo(int m, int u, int r, int v[],int t[], int f[],int current){
    
    if(mems[m][u][current]==true)
    return mem[m][u][current];
    
    if(current == r){
    mem[m][u][current] = 0;
    mems[m][u][current]=true;
    return 0;
    }
    if(t[current] > m || f[current] > u){
        mem[m][u][current] = woo(m,  u,  r,  v, t, f,current+1);  
    mems[m][u][current]=true;
     return mem[m][u][current];  
    }
    else{
        mem[m][u][current] = max(woo(m,  u,  r,  v, t, f,current+1),woo(m-t[current], u-f[current], r, v, t, f,current+1)+v[current]);  
    mems[m][u][current]=true;
       return mem[m][u][current];
    }
}
int main()
{
    int m,u,r;
    cin>>m>>u>>r;
    int * v = new int[r];
    int * t = new int[r];
    int * f = new int[r];
    for(int c = 0; c< r; c++){
        cin>>v[c];
        cin>>t[c];
        cin>>f[c];
    }
    int current = 0;
    cout<<woo( m,  u,  r,  v, t, f, current);
    return 0;
}