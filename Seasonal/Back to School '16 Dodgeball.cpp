#include <iostream>
#include <string>
using namespace std;

int main()
{
   int n;
   cin>>n;
   int counter = n;
   string *people = new string [n + 1];
   for(int c = 0;c<n;c++){
     cin>>people[c];  
   }
    
    for(int c = 0; c<n; c++){
        people[c] = people[c][0];
    }
  
    
   int count = 1;
   for(int c = 0;c<n-1;c++){
        count = 1;
       while(1){
           if(people[c] == people[c+count]){
           counter++;
           count++;
           }
           else{
               break;
           }
           
       }
   }
   cout<<counter<<endl;
  
    return 0;
}