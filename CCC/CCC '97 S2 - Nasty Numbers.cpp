#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    int n;
    cin>>t;
for(int c = 0; c<t;c++){
    int nasty = 0;
    cin>>n;
    int factorcounter = 0;
    for(int count = 1;count<=sqrt(n);count++){
        if(n%count==0)
        factorcounter++;
    }
    
    int*factors = new int [factorcounter];
    for(int count = 1,c=0;count<=sqrt(n);count++){
        if(n%count==0){
        factors[c]=count;
        c++;
        }
    }
     int*newfactors = new int [factorcounter];
        for(int count = 0;count<factorcounter;count++)
        newfactors[count] = n/factors[count];
        
    
     int*sums = new int [factorcounter];
    for(int count = 0;count<factorcounter;count++){
        sums[count]=factors[count]+newfactors[count];
        }
        int*diff = new int [factorcounter];
    for(int count = 0;count<factorcounter;count++){
        diff[count]=newfactors[count]-factors[count];
        }
        
        for(int c = 0;c<factorcounter;c++){
            for(int count = 0; count<factorcounter;count++)
            if(sums[c]==diff[count]){
            nasty = 1;
            break;
        }
        }
        if(nasty == 1)
         cout<<n<<" is nasty"<<endl;
else
 cout<<n<<" is not nasty"<<endl;
}
    return 0;
}