#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
	int square[4][4] = {0};
	int sum = 0;
	int sum1 = 0;
	for(int row=0; row<4;row++){
	for(int column=0; column<4;column++){
	cin>>square[row][column];
	}
	}
    int  magic = 0;
	   int row = 0;
	for(int column=0; column<4;column++){
	sum = sum + square[row][column];
	}
	
	for(int row = 0; row<4;row++){
for(int column=0; column<4;column++){
   sum1 = sum1 + square[row][column];
	}
	if(sum1!=sum){
	    magic = 1;
	}
	sum1 = 0;
	}
	
for(int column=0; column<4;column++){
    for(int row = 0; row<4;row++){
   sum1 = sum1 + square[row][column];
	}
	if(sum1!=sum){
	    magic = 1;
	}
	sum1 = 0;
	}
	if(magic == 0)
	    cout<<"magic"<<endl;
	    if(magic==1){
	        
	       cout<<"not magic"<<endl;
	    }

   	return 0;}