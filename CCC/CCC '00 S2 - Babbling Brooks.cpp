#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n,x,y;
    cin>>n;
    float z;
    float stream[101];
    float news[101];
    for(int c = 1; c<=n;c++){
    cin>>stream[c];
    news[c] = stream[c];
    }
    while(1){
        cin>>x;
        if(x==99){
            
          cin>>y;
          cin>>z;
          for(int c = y; c<=n;c++){
            news[c + 1]=stream[c];
          }
          n++;
            news[y] = news[y]*(z/100);
            news[y+1] = news[y+1]*((100-z)/100);
        }
        if(x==88){
        cin>>y;    
        news[y]+=news[y+1];
       
             for(int c = y+1; c<=n;c++){
            news[c]=stream[c+1];
             }
              n--;
        }
        if(x==77){
        break;
        }
        for(int c = 1; c<=n; c++){
        stream[c]=news[c];
        }
    }
    for(int c = 1; c<=n; c++){
    news[c]=round(news[c]);
    }
    for(int c = 1; c<=n; c++){
    cout<<news[c]<<" ";
    }
    return 0;
}