#include <iostream>
#include <vector>
using namespace std;

int woo(vector<int> sequence, int current){
 if(sequence[current - 2]<sequence[current - 1])
 return sequence.size();
 
else{
sequence.push_back(sequence[current-2]-sequence[current-1]);
return woo(sequence, current + 1);
}
}
int main()
{
    int input;
    vector <int> sequence;
    for(int i = 0; i<2; i++){
    cin>>input;
    sequence.push_back(input);
    }
    int current = 2;
   cout<< woo(sequence,current);
    return 0;
}