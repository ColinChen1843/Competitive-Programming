#include <bits/stdc++.h>

using namespace std;
int main() {
  string s;
  int n, cats = 0, dogs = 0;
  cin>>n;
  for(int i = 0; i < n; i++){
    cin>>s;
    if(s == "cats") cats++;
    else dogs++;
  }

  if(cats > dogs) cout<<"cats"<<endl;
  else if(dogs > cats) cout<<"dogs"<<endl;
  else cout<<"equal"<<endl;


  return 0;
}