#include <iostream>
#include <string>
using namespace std;

string b(string ban){
    int bcount = 0;
    int scount = 0;
    int s;
    for(int i = 0; i< ban.length(); i++){
    if(ban[i] == 'B')
    bcount++;
     if(ban[i] == 'S')
    scount++;
    if(scount == bcount){
    s = i;
     ban = ban.substr(1 , i-1);
    break;
    }
    }
    return ban;
}

int woo(string banana){
string ban = banana;
if(ban[0] == 'A'&& ban.length() == 1 )
return 1;
if(ban[0]=='A'&& ban[1] == 'N')
return woo(ban.erase(0,2));
if(ban[0]=='B'&& ban.find('S') < ban.length()&& woo(b(ban)) == 1){
ban.erase(ban.find('S'),1);
ban.erase(0,1);
return woo(ban);
}
else
return 0;
}

int main()
{
string banana;
while(1){
    getline(cin, banana);
    if(banana=="X")
    break;
    if(woo(banana)==1)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}

    return 0;
}