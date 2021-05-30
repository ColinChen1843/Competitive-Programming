#include <bits/stdc++.h>
using namespace std;

int main() 

{

  string s1, s2;
  cin>>s1>>s2;

  bool t = false;
  
  for (int i = 0; i < s2.length(); i++)
  {
    if (s1.find(s2) < 10000)
    {
      t = true;
      break;
    }
    string a = s2.substr(0,1);
    s2 = s2.substr(1,s2.length()-1);
    s2+=a;
  }

  (t == true) ? cout<<"yes"<<endl : cout<<"no"<<endl;
  
  return 0;

}