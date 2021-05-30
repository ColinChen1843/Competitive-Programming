#include <iostream>

using namespace std;

int main()
{
  int n;
  cin>>n;
  int** data = new int*[n];
  for(int i = 0;i<n;i++)
  data[i] = new int [n];
  
int** newdata = new int*[n];
  for(int i = 0;i<n;i++)
  newdata[i] = new int [n];
for(int c = 0; c<n; c++){
    for(int count = 0; count<n; count++){
        cin>>data[c][count];
    }
    
}
int smallest = 1000000000;
for(int c = 0; c<n;c++){
    for(int count = 0; count<n; count++){
     if(data[c][count]<smallest)
     smallest=data[c][count];
    }
}

if(smallest == data[0][0]){
    for(int c = 0; c<n; c++){
    for(int count = 0; count<n; count++){
        cout<<data[c][count]<<" ";
    }
cout<<endl;
}
}

if(smallest == data[n-1][0]){
    for(int i=0; i<n; i++) {
    for(int j=0; j<n; j++) {
        newdata[i][j] = data[n-1-j][i];
        cout<<newdata[i][j]<<" ";
    }
    cout<<endl;
}
    
}
if(smallest == data[n-1][n-1]){
 for(int i=0; i<n; i++) {
    for(int j=0; j<n; j++) {
        newdata[i][j] = data[n-1-i][n-1-j];
        cout<<newdata[i][j]<<" ";
    }
    cout<<endl;
}
}
if(smallest == data[0][n-1]){
    for(int i=0; i<n; i++) {
    for(int j=0; j<n; j++) {
        newdata[i][j] = data[j][n-1-i];
        cout<<newdata[i][j]<<" ";
    }
    cout<<endl;
}
    
}
    return 0;
}