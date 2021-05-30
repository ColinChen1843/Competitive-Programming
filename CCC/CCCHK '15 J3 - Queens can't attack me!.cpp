#include <iostream>

using namespace std;

int main()
{
    int n,m,x,y;
    cin>>n;
    cin>>m;
    int**board=new int*[n];
    for(int i = 0; i < n; ++i)
    board[i] = new int[n];
    
    
    for(int c = 0;c<m;c++){
        cin>>x;
        cin>>y;
        x = x-1;
        y = y-1;
        board [x][y] = 1;
    
    
    for(int w = 0; w<n;w++){
        board[w][y]++;
        board[x][w]++;
    }
  int x1= x;
  int y1 = y;
  int y2 = y;
  int x2 = x;
  int h = 0;
int f = 0;
while(h == 0 || f == 0){
if(x1>n-1||y1>n-1)
     h++;

else{
 board[x1][y1]++;
      x1++;
      y1++;
    
}
      
if(x2<0||y2<0)
      f++;

else{
board[x2][y2]++;
      x2--;
      y2--;
}
  }
  
  
   int x3= x;
  int y3 = y;
  int y4 = y;
  int x4 = x;
  int j = 0;
int k = 0;
while(j == 0 || k == 0){
if(x3<0||y3>n-1)
      j++;

else{
board[x3][y3]++;
      x3--;
      y3++;
}
if(x4>n-1||y4<0)
     k++;

else{
 board[x4][y4]++;
      x4++;
      y4--;
}
  }
  
    } 
    int counter = 0;
    for(int c = 0;c<n;c++){
        for(int co = 0; co<n; co++){
           if(board[c][co]==0)
           counter++;
        }
    }
    cout<<counter<<endl;
    return 0;
}