#include <iostream>
using namespace std;

int main()
{
  unsigned long long int r,c;
    char x;
    cin>>r>>c;
    unsigned long long int **lab = new unsigned long long int *[r+1];
    for( unsigned long long int i = 0; i < r+1; i++) {
    lab[i] = new unsigned long long int[c+1];
}
for( unsigned long long int i = 0; i<=r;i++)
lab[i][0] = -1;
for( unsigned long long int i = 0; i<=c;i++)
lab[0][i] = -1;
for( unsigned long long int i = 1; i<=r; i++){
    for( unsigned long long int co = 1; co<=c; co++){
     cin>>x;
     if(x == '#')
     lab[i][co] = -1;
     else
     lab[i][co] = 0;
    }
}


lab[1][1] = 1;
for( unsigned long long int row = 1; row<=r;row++){
    for( unsigned long long int column = 1; column<=c; column++){
        if(lab[row][column] == 0){
     if(lab[row-1][column]!=-1)
     lab[row][column] = (lab[row][column]+lab[row-1][column])%1000000007;
     if(lab[row][column-1]!=-1)
     lab[row][column] = (lab[row][column]+lab[row][column-1])%1000000007;  
        
        }
    }
}

cout<<lab[r][c]<<endl;

    return 0;
}