#include <iostream>
using namespace std;
int main() {
int a,b,c;
cin>>a>>b>>c;
if(a<-40&&b>=15){
  cout<<"YES"<<endl;
}
else if(a<-40&&c>50)
cout<<"YES"<<endl;
else if(b>=15&&c>50)
cout<<"YES"<<endl;
else if(a<-40&&b>=15&&c>50)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
  return 0;
}