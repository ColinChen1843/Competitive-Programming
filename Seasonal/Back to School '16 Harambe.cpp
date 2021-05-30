#include <iostream>
#include <string>
using namespace std;

int main()
{
   string s;
   getline(cin,s);
   int up = 0;
   int low = 0;
   for(int c= 0; c<s.length();c++){
       if(s[c]=='A'||s[c]=='B'||s[c]=='C'||s[c]=='D'||s[c]=='E'||s[c]=='F'||s[c]=='G'||s[c]=='H'||s[c]=='I'||s[c]=='J'||s[c]=='K'||s[c]=='L'||s[c]=='M'||s[c]=='N'||s[c]=='O'||s[c]=='P'||s[c]=='Q'||s[c]=='R'||s[c]=='S'||s[c]=='T'||s[c]=='U'||s[c]=='V'||s[c]=='W'||s[c]=='X'||s[c]=='Y'||s[c]=='Z')
       up++;
       if(s[c]=='a'||s[c]=='b'||s[c]=='c'||s[c]=='d'||s[c]=='e'||s[c]=='f'||s[c]=='g'||s[c]=='h'||s[c]=='i'||s[c]=='j'||s[c]=='k'||s[c]=='l'||s[c]=='m'||s[c]=='n'||s[c]=='o'||s[c]=='p'||s[c]=='q'||s[c]=='r'||s[c]=='s'||s[c]=='t'||s[c]=='u'||s[c]=='v'||s[c]=='w'||s[c]=='x'||s[c]=='y'||s[c]=='z')
      low++;
   }
  for(int c= 0; c<s.length();c++){
   if(up>low)
     s[c]=toupper(s[c]); 
if(low>up)
s[c]=tolower(s[c]);
}
cout<<s<<endl;
    return 0;
}