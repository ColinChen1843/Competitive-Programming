#include <bits/stdc++.h>
using namespace std;

int main(){

int n, input, small = 1000000001;
cin>>n;
for(int i = 0; i < n; i++){
  cin>>input;
  if(input < small) small = input;
}
cout<<small<<endl;

    return 0;
}