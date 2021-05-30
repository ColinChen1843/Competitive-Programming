#include <iostream>
#include <deque>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--){
deque <int> top;
deque <int> side;
int bottom = 0;
int n;
cin>>n;
int input;
    	for (int i = 0; i < n; i++) 
	{
		cin >> input;
		top.push_front(input);
	}
	
	while(top.size()>0){
	 
	 if(top[0]==bottom+1){
	 bottom++;
	 top.pop_front();
     
	 }
	 
	 else if(side.size()>0&&side[0]==bottom + 1){
	  bottom++;
	  side.pop_front();
	 }
	  else {
	     side.push_front(top[0]);
	     top.pop_front();
	 }
	}
	
	while(side.size() > 0) {
	    if(side[0]==bottom+1){
	    bottom++;
	     side.pop_front();
	    }
	    else{
	        break;
	    }
	}
	if(side.size()>0)
	cout<<"N"<<endl;
	else
	cout<<"Y"<<endl;
}
	

    return 0;
}