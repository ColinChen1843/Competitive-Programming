#include <bits/stdc++.h>

using namespace std;

int main() {
  int n,f;
  cin>>n>>f;
  int a = f - n;
  if(a<=0)
  cout<<"Congratulations, you are within the speed limit!"<<endl;
  if(a>=1 && a <= 20)
  cout<<"You are speeding and your fine is $100."<<endl;
  if(a>=21 && a <= 30)
  cout<<"You are speeding and your fine is $270."<<endl;
  if(a>=31)
  cout<<"You are speeding and your fine is $500."<<endl;
    return 0;
}