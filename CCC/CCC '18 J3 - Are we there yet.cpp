#include <iostream>

using namespace std;

int main()
{
   int i [4];
    for(int c = 0;c<4;c++){
    cin>>i[c];
    }
    
int arr [5][5] = {0};
for(int c = 0; c<5;c++){
    for(int count = 0; count<5; count++){
        int counter = count;
if(c==count)
    arr [c][count]=0;
if(count>c)
arr [c][count] = arr [c][count-1] + i[count-1];
if(c>count){
    while(counter<c){
        arr[c][count] = arr[c][count]+i[counter];
        counter++;
    }
}

}
    }

for(int c = 0; c<5;c++){
    for(int count = 0; count<5; count++){
        cout<<arr[c][count]<<" ";
    }
    cout<<endl;
}
    return 0;
}