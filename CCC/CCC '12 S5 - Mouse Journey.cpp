#include <iostream>

using namespace std;

int main()
{
    int r,c,k,x,y;
    cin>>r>>c>>k;
    c++;
    int **lab = new int *[r+1];
    for(int i = 0; i < r+1; i++) {
    lab[i] = new int[c];
}
c--;
for(int i = 0; i<=r;i++)
lab[i][0] = -1;
for(int i = 0; i<=r;i++)
lab[0][i] = -1;
for(int i = 0; i<k; i++){
cin>>x>>y;
lab[x][y] = -1;
}
lab[1][1] = 1;
for(int row = 1; row<=r;row++){
    for(int column = 1; column<=c; column++){
        if(lab[row][column]!=-1){
     if(lab[row-1][column]!=-1)
     lab[row][column] += lab[row-1][column];
     if(lab[row][column-1]!=-1)
     lab[row][column] += lab[row][column-1];  
        }
    }
}
cout<<lab[r][c]<<endl;
    return 0;
}