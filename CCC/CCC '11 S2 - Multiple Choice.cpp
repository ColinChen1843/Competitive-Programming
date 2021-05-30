#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int counter = 0;
	char * answer = new char[n];
	char *key = new char [n];
	for(int c = 0; c<n; c++){
	cin>>answer[c];
	}
	for(int c = 0; c<n; c++){
	cin>>key[c];
	}
	for(int c = 0; c<n; c++){
	if(key[c]==answer[c])
		counter++;
	}
	cout<<counter<<endl;
    return 0;
}