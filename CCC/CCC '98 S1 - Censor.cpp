#include <iostream>
#include <string>
using namespace std;
 int main()
 {
    int n;
    cin>>n;
    for(int c = 0;c<n+1;c++){
	string s1;
	string s2("");
    getline(cin,s1);
		while(s1.find(" ")<100000000){
	string s3 = s1.substr(0,s1.find(" "));
	if(s3.length()==4)
		s3 = ("****");
		s2 = s2+s3+" ";
	s1.erase(0,s1.find(" ")+1);
	}
	
	if(s1.length()==4)
	s1 = ("****");
	s2 = s2 +s1+" ";
	cout<<s2<<endl;
    }

 return 0;
    }