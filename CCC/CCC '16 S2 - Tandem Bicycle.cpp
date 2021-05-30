#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int n;
    cin>>n;
    int *dmoj = new int [n];
    int *peg = new int [n];
    for(int c = 0; c<n; c++)
    cin>>dmoj[c];
    for(int c = 0; c<n; c++)
    cin>>peg[c];
    
       
    sort(dmoj,dmoj+n);
    sort(peg,peg+n);
int sum = 0;
if(t == 1){
    for(int c = 0; c<n;c++){

    sum = sum + max(dmoj[c],peg[c]);
}
cout<<sum;
}

if(t==2){
      int c = 0;
      int co = n - 1;
      while(c<n){
    sum+=max(dmoj[c],peg[co]);
    c++;
    co--;
    }  
      cout<<sum;    
      }

    return 0;
}