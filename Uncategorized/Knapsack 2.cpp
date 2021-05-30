#include <iostream>
#include <algorithm>
using namespace std;

long int maxvalue(long int weight[],long int value[], long int item, long int weightleft){
    long int result;
    if(weightleft==0||item==0)
    return 0;
    if(weight[item-1]>weightleft)
    return maxvalue(weight,value,item-1,weightleft);
    else{
        result = max(maxvalue(weight,value,item-1,weightleft-weight[item-1])+value[item-1],  maxvalue(weight,value,item-1,weightleft));
   
    }
     return result;
}
int main()
{
   long int item,maxweight;
    cin>>item>>maxweight;
   long  int*weight = new long int [item];
   long  int*value = new long int [item];
    for(int i = 0; i < item; i++){
        cin>>weight[i]>>value[i];
    }
    long int weightleft = maxweight;
    cout<<maxvalue(weight,value,item,weightleft)<<endl;

    return 0;
}