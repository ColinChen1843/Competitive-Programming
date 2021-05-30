#include <bits/stdc++.h>

using namespace std;

int main() {
  int x,y,n,bigx = -1001,smallx = 1001,bigy = -1001,smally = 1001;
  cin>>n;
  for(int i = 0; i < n; i++){
    cin>>x>>y;
  if(x<smallx)
  smallx = x;
  if(x>bigx)
  bigx = x;
  if(y<smally)
  smally = y;
  if(y>bigy)
  bigy = y;
  }
  int area = (bigx-smallx)*(bigy-smally);
  cout<<area<<endl;
    return 0;
}