#include <iostream>

using namespace std;

int main()
{
   int distance,numofclubs;
   cin>>distance;
   cin>>numofclubs;
   int*clubs = new int [numofclubs];
   for(int c  = 0; c< numofclubs; c++){
   cin>>clubs[c];
   }
    int current;
    int *result = new int [distance+1];
    for(int c = 0; c<distance+1;c++){
    result[c] = distance+1;
    }
    result[0] = 0;
    for(int c = 1;c<distance+1;c++){
        for(int i = 0; i<numofclubs;i++){
            if(clubs[i]<=c){
                current = c-clubs[i];
                if(result[current]+1<result[c])
                result[c] = result[current]+1;
            }
        }
        
    }
    if(result[distance]==distance+1)
    cout<<"Roberta acknowledges defeat."<<endl;
    else
    cout<<"Roberta wins in "<<result[distance]<<" strokes."<<endl;
    
    return 0;
}