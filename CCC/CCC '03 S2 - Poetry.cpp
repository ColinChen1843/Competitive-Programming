#include <iostream>
#include <string>
using namespace std;
 int main()
 {
    int n;
    cin>>n;
		cin.ignore();
   string s;
   string s1;
   string last[4];
    for(int c = 0;c<n;c++){
		for(int count = 0;count<4;count++){
		getline(cin,s);
		for(int i = 0; i<s.length();i++)
			s[i]=tolower(s[i]);
		if(s.find_last_of(" ")<10000000)
		s1=s.substr(s.find_last_of(" "));
		else
		last[count] = s;
		
		
		if(s1.find_last_of("aeiou")<1000000)
        last[count]=s1.substr(s1.find_last_of("aeiou"));
		else if(last[count]!=s)
		last[count] = s1;

		}
    

	if(last[0]==last[1]&&last[0]==last[2]&&last[0]==last[3]){
	cout<<"perfect"<<endl;
	}
	else if(last[0]==last[1]&&last[2]==last[3]){
	cout<<"even"<<endl;
	}
	else if(last[0]==last[2]&&last[1]==last[3]){
	cout<<"cross"<<endl;
	}
	else if(last[0]==last[3]&&last[1]==last[2]){
	cout<<"shell"<<endl;
	}
	else
		cout<<"free"<<endl;
    }
 return 0;
    }