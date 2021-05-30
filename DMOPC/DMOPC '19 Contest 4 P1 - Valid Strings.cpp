#include <bits/stdc++.h>
using namespace std;

int main(){
  
int n;
cin>>n;
string s;
for(int i = 0; i < n; i++){
  cin>>s;
  int open = 0;
  for(int j = 0; j < s.length(); j++){

    //if(s[j] != '1' && s[j] != '2' && s[j] != '3' && s[j] != '4' && s[j] != '5' && s[j] != '6' && s[j] != '7' && s[j] != '8' && s[j] != '9' && s[j] != '0' && s[j] != '(' && s[j] != ')'){
    //  cout<<"NO"<<endl;
     // break;
    //}

    if(s[j] == '(') open++;
    if(s[j] == ')' && open > 0) open--;
    else if(s[j] == ')' && open == 0){
      open = -99999;
      break;
    }

  }
  if(open == 0) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
}
  return 0;
}