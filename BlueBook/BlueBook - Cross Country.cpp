#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  cin>>s;
  if(s == "MG") cout<<"midget girls"<<endl;
  else if(s == "MB") cout<<"midget boys"<<endl;
  else if(s == "JG") cout<<"junior girls"<<endl;
  else if(s == "JB") cout<<"junior boys"<<endl;
  else if(s == "SG") cout<<"senior girls"<<endl;
  else if(s == "SB") cout<<"senior boys"<<endl;
  else cout<<"invalid code"<<endl;


  return 0;
}