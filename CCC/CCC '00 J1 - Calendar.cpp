#include <iostream>
#include <string>
 
using namespace std;
 
int main(){
	int calender [6][7] = {0};
   int first, days;
   cin>> first;
   cin>>days;
   first--;
   cout<<"Sun Mon Tue Wed Thr Fri Sat"<<endl;
   int x = 1;
   for(int c = 0; c< 6; c++){

   for(int count = first; count<7; count++){
	   if(x<=days){
   calender[c][count] = x;
   first = 0;
   x++;   
	   }
   }
   

	   for(int count=0; count<7;count++){
	      
	      
		   if(calender[c][count]==0&&calender[c][count]!=days)
			   cout<<"    ";
			  
			 if(count == 6&&calender[c][count]<10&&calender[c][count]!=0&&calender[c][count]!=days)
	       cout<<"  "<<calender[c][count];
	       
	       if(count == 6&&calender[c][count]>=10&&calender[c][count]!=0&&calender[c][count]!=days)
	       cout<<" "<<calender[c][count];
		  
		   if(count != 6&&calender[c][count]<10&&calender[c][count]!=0&&calender[c][count]!=days)
	   cout<<"  "<<calender[c][count]<<" ";
		 
		   if(count != 6&&calender[c][count]>=10&&calender[c][count]!=0&&calender[c][count]!=days)
			    cout<<" "<<calender[c][count]<<" ";
			    
			    if(calender[c][count]==days){
			     cout<<" "<<calender[c][count];
			    count = 8;
			    c = 11;
			    }
	   }
	   cout<<endl;
   }
   return 0;
 
}