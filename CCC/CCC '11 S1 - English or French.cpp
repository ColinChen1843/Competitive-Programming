#include <iostream>
#include <string>
using namespace std;
 int main()
 {
   int n;
   cin>>n;
   cin.ignore();
   int s = 0;
   int t = 0;
   string sentence;
   for(int c = 0; c < n; c++){  
       getline(cin,sentence);
       for(int count = 0; count < sentence.length();count++){
    if(sentence[count]=='s'|| sentence[count]=='S')
        s++;
      if(sentence[count]=='t'|| sentence[count]=='T')
        t++;
       }
       }

       if(t>s)
       cout<<"English"<<endl;
       if(t<=s)
       cout<<"French"<<endl;
       
 return 0;
    }