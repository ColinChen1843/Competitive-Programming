#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin>>n;
  for(int i = 0; i < n; i++){
    string s;
    cin>>s;
    bool m = false, c = false;
    for(int j = 0; j < s.length(); j++){
      if(s[j] == 'M') m = true;
      if(s[j] == 'C') c = true;
    }
    if(m == true && c == true) cout<<"NEGATIVE MARKS"<<endl;
    else if(m == false && c == false) cout<<"PASS"<<endl;
    else cout<<"FAIL"<<endl;
  }
    return 0;
}