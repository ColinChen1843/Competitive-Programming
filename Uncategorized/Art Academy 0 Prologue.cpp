#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  string name;
  cin>>n;
  for(int i = 0; i < n; i++){
    cin>>name;
    for(int ii= 0; ii < name.length(); ii++){
      if(name[ii] == 'a'||name[ii] =='A')
      cout<<"Hi! ";
      if(name[ii] =='e'||name[ii] =='E')
     cout<<"Bye! ";
      if(name[ii] =='i'||name[ii] =='I')
      cout<<"How are you? ";
      if(name[ii] =='o'||name[ii] =='O')
      cout<<"Follow me! ";
      if(name[ii] =='u'||name[ii] =='U')
      cout<<"Help! ";
      if(name[ii] == '1'||name[ii] =='2'||name[ii] =='3'||name[ii] =='4'||name[ii] =='5'||name[ii] =='6'||name[ii] =='7'||name[ii] =='8'||name[ii] =='9'||name[ii] =='0')
      cout<<"Yes! ";
    }
    cout<<endl;
  }
    return 0;
}