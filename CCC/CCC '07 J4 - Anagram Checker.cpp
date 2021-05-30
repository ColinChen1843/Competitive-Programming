#include <iostream>
#include <string>
 
using namespace std;
 
int main(){
string a;
string b;
string d;
getline(cin,a);
getline (cin,b);
d = a;
int counter = 0;
for(int c = 0; c<d.length();c++){
    
    if(b.find(d[c])<10000000)
    b.erase(b.find(d[c]),1);
    else
    counter++;
}
if(counter==0)
cout<<"Is an anagram."<<endl;
if(counter!=0)
cout<<"Is not an anagram."<<endl;
   return 0;
 
}