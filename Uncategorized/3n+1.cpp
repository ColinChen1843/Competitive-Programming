#include <bits/stdc++.h>

using namespace std;

int main() {
int n, i = 0;
cin>>n;
while(n != 1){
  if(n%2 == 0) n/= 2;
  else n = 3*n+1;
  i++;
}

cout<<i<<endl;

  return 0;
}