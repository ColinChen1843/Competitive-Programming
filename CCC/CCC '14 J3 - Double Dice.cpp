#include <iostream>
#include <fstream>
using namespace std;
 
int main()
{
  int n;
  cin>>n;
  int d,a;
  int antonia = 100;
  int david = 100;
  for(int c = 0; c<n; c++){
  cin>>a;
  cin>>d;
  if(a>d)
	  david = david - a;
  if(d>a)
	  antonia = antonia - d;
  }
  cout<<antonia<<endl;
  cout<<david<<endl;
}