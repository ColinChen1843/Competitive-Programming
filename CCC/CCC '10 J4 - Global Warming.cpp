#include <iostream>
#include <vector>
using namespace std;
int main () {
   
int on=1;

while (on==1) {
 
int n;

cin>>n;

if (n==0) {
    on=0;
    break;
}

int *temps=new int[n];

for (int i=0; i<=n-1; i++)
cin>>temps[i];

int *diffs=new int[n-1];

for (int i=0; i<n-1; i++)
diffs[i]=temps[i+1]-temps[i];

vector <int> cycles; 
cycles.push_back(diffs[0]);

int c=0;
int i=0;

while (i<n-1){
 if(diffs[i] == cycles[c]){

     if (c==cycles.size()-1)
        c=0;
    else{
      c++;
      
    }
    i++;
 }
 else{
     cycles.push_back(diffs[cycles.size()]);
    c = 0;
    i=cycles.size();
}
}

if (n==1)
cout<<"0"<<endl;
else{
    cout<<cycles.size()<<endl;
}
} 
   
return 0;
}