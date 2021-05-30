#include <bits/stdc++.h>

using namespace std;

int main() {
  int X,Y,r, x,y,m = 999999999,x2,y2,m2;
  cin>>r>>X>>Y;

  for(int i = 0; i < 3; i++){
    cin>>x2>>y2>>m2;
    if(m2<m){
      x = x2, y = y2, m = m2;
    }
  }

  double dist = sqrt((X-x)*(X-x)+(Y-y)*(Y-y));
  if(dist < r) cout<<"What a beauty!"<<endl;
  else cout<<"Time to move my telescope!"<<endl;

  return 0;
}