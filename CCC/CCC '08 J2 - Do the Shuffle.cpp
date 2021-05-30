#include <bits/stdc++.h>

using namespace std;

int main() {
  int n,b;
  string play = "ABCDE";
  string x;
  while(1){
    cin>>b>>n;
    if(b == 4)
    break;
    for(int i = 0; i < n; i++){
      if(b == 1){
        x = play[0];
        play.erase(0,1);
        play.insert(4,x);
      }
      if(b == 2){
        x = play[4];
        play.erase(4,1);
        play.insert(0,x);
      }
      if(b == 3){
        x = play[1];
        play.erase(1,1);
        play.insert(0,x);
      }
    }
  }
  for(int i =0; i < 5; i++){
    cout<<play[i]<<" ";
  }
    return 0;
}