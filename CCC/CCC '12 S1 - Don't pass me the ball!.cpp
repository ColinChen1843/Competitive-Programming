#include <iostream>
#include <fstream>

using namespace std;

int main()
{
int j;
cin>>j;
int counter = 0;
for(int a = 1;a<j; a++){
    for(int b = 1;b<j;b++){
        for(int c = 1;c<j;c++){
        if(a<b&&b<c&&a<c){
        counter++;
        }
        }
    }
}
cout<<counter<<endl;
    return 0;
}