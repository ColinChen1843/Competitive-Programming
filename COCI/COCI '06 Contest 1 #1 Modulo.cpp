#include <bits/stdc++.h>
using namespace std;

int main(){

int t = 10;
int ans = 0;
bool freq[43] = {false};
while(t--){
  int x;
  cin>>x;
  x %= 42;
  if(!freq[x]){
    freq[x] = true;
    ans++;
  }
}

cout<<ans<<endl;
 
  return 0;
}