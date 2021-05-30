#include <bits/stdc++.h>

using namespace std;

int main() {
   int qw = 10;
 while(qw--){
int n,m,d, input, total, clean, sum = 0;
   cin>>n>>m>>d;
  int * events = new int[d+1] ;
   total = n;
   clean = n;
   for(int i = 0; i < m; i++){
     cin>>input;
    events[input]++;
   }
  for(int i = 1; i <= d; i++){
    if(clean == 0){
      sum++;
      clean = total;
    }
    if(events[i] != 0){
      clean+=events[i];
      total+=events[i];
    }
      clean--;
  }
  cout<<sum<<endl;
 }
    return 0;
}