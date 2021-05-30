#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
    int n;
	cin>>n;
	int obs,subs,verbs;
		for(int c = 1; c<=n; c++){
		cin>>subs;
		cin>>verbs;
		cin>>obs;
		string *object;
		object = new string[obs]; 
		string *verb;
		verb = new string[verbs]; 
		string *sub;
		sub = new string[subs];
		
		cin.ignore();
		for(int count = 0; count<subs; count++)
		getline(cin, sub[count]);
		for(int count = 0; count<verbs; count++)
		getline(cin, verb[count]);
		for(int count = 0; count<obs; count++)
		getline(cin, object[count]);


		
		for(int subcount = 0; subcount<subs; subcount++){
		for(int verbcount = 0; verbcount<verbs; verbcount++){
		for(int obcount = 0; obcount<obs; obcount++){
			string sentence("");
			sentence = sentence+sub[subcount]+" "+verb[verbcount]+" "+ object[obcount]+".";
			cout<<sentence<<endl;
		}
		}
		}



		}
   return 0;
 
}