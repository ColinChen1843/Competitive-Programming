#include <bits/stdc++.h>
using namespace std;
int n,t, qw = 10,days;
char day;
int main(){
  while(qw--){
    days = 0;
   cin>>t>>n;
   for(int i = 0; i < n; i++){
     cin>>day;
     if(day == 'B')
     days += t;
     if(days!=0)
     days--;
   } 
  cout<<days<<endl;
  }
  
    return 0;
}