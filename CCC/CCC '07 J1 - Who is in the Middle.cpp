#include<iostream>
#include <algorithm>
using namespace std;


int main(){
		int bowls[3];
		for(int i = 0; i<3;i++)
		cin>>bowls[i];
	 sort(bowls,bowls+3);
	 cout<<bowls[1];
return 0;
}