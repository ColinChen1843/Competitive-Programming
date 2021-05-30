#include <iostream>

using namespace std;

int main()
{
   int n;
   cin>>n;
   while(n--){
       int arr[10];
       for(int i = 0; i<10; i++)
       cin>>arr[i];
       int ari, geo;
       if(arr[0] != 0){
       geo = arr[1] / arr[0];
       }
       else
       geo = 0;
      ari = arr[1]-arr[0];
       int acheck = 0;
       int gcheck = 0;
        for(int i = 1; i<9; i++){
       if(arr[i] + ari != arr[i + 1])
       acheck = 1;
       if(arr[i] * geo != arr[i + 1])
       gcheck = 1;
    }
       if(acheck == 0 && gcheck == 0)
       cout<<"both"<<endl;
      else if(gcheck == 0 && acheck != gcheck)
       cout<<"geometric"<<endl;
      else  if(acheck == 0 && acheck != gcheck)
       cout<<"arithmetic"<<endl;
   else if(acheck == 1 && gcheck == 1)
       cout<<"neither"<<endl;
   }
    return 0;
}