#include <iostream>
#include <string>
 
using namespace std;
 
int main(){
string a;
int b[2][2]={1,2,3,4};
getline(cin,a);

for(int c = 0; c<a.length();c++){
    switch (a[c]){
        case 'H':
        swap(b[0][0],b[1][0]);
        swap(b[0][1],b[1][1]);
        break;
        case 'V':
        swap(b[0][0],b[0][1]);
        swap(b[1][0],b[1][1]);
        break;
    }
    
}
for(int c = 0;c<2;c++){
    for(int count = 0; count<2; count++){
        cout<<b[c][count]<<" ";
    }
    cout<<endl;
}
   return 0;
 
}