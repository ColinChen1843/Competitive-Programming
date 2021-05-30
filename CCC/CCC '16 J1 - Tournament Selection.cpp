#include<iostream>
using namespace std;


int main(){
int wins = 0;
char input;
int i = 6;
while(i--){
cin>>input;
if(input == 'W'||input == 'w')
    wins++;
}
if(wins==5||wins==6)
cout<<1<<endl;
else if(wins==3||wins == 4)
cout<<2;
else if(wins==1||wins==2)
cout<<3;
if(wins==0){
cout<<-1;
}

return 0;
}