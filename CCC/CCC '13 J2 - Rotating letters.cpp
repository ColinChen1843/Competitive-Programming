#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin>>s;
    bool e = true;
    for(int i = 0; i < s.length(); i++){
        if(s[i]!='I' && s[i]!='O'&& s[i]!='S'&&s[i]!='H'&&s[i]!='Z'&&s[i]!='X'&&s[i]!='N'){
            e = false;
            cout<<"NO"<<endl;
            break;
        }
    }
    if(e == true)
    cout<<"YES"<<endl;
    return 0;
}