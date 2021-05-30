#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
   int n;
  cin>>n;
  vector  <int> positive;
  vector <int> negative;
  vector <int> zero;
  int input;
  int product = 1;
    	for (int i = 0; i < n; i++) 
	{
		cin >> input;
		if(input>0)
		positive.push_back(input);
		if(input == 0)
		zero.push_back(input);
		if(input < 0)
		negative.push_back(input);
	}
	if(positive.size()>0){
  for(int i = 0; i< positive.size(); i++)
  product = product*positive[i];
	}
	
	sort(negative.begin(),negative.end());
	if(negative.size()>1&&negative.size()%2 != 0)
	    negative.pop_back();
  
  for(int i = 0; i < negative.size(); i++){
      product = product*negative[i];
      }
   
   if(product<0&&zero.size()>0)
   product = 0;
   cout<<product<<endl;
   
    return 0;
}