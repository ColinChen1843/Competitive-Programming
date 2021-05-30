#include <string>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
map <string , int> mem;
int woo(string tat){
if(mem[tat] != 0){
return mem[tat];
}

if(tat.length()==1){
return 1;
}

if(tat.length()==0){
return 0;
}

if(tat[0] == tat[tat.length()-1]){
string tat1 = tat; 
tat1.erase(0,1);
tat1.erase(tat1.length()-1,1);
mem[tat]=woo(tat1)+2;
return mem[tat];
}

else{
string tat1 = tat;
string tat2 = tat;
tat2.erase(tat2.length()-1,1);
tat1.erase(0,1);
mem[tat]=max(woo(tat1),woo(tat2));
return mem[tat];
}

}

int main()
{
    int t = 5;
    while(t--){
      string tat;
      cin>>tat;
      cout<<woo(tat)<<endl;
}
    return 0;
}