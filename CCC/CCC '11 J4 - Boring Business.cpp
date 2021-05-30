#include <iostream>
using namespace std;
int main()
{
   bool mine [300] [800] = {false};
   mine [1][300] = true;
   mine [2][300] = true;
   mine [3][300] = true;
   mine [3][301] = true;
   mine [3][302] = true;
   mine [3][303] = true;
   mine [4][303] = true;
   mine [5][303] = true;
   mine [5][304] = true;
   mine [5][305] = true;
   mine [4][305] = true;
   mine [3][305] = true;
   mine [3][306] = true;
   mine [3][307] = true;
   mine [4][307] = true;
   mine [5][307] = true;
   mine [6][307] = true;
   mine [7][307] = true;
   mine [7][306] = true;
   mine [7][305] = true;
   mine [7][304] = true;
   mine [7][303] = true;
   mine [7][302] = true;
   mine [7][301] = true;
   mine [7][300] = true;
   mine [7][299] = true;
   mine [6][299] = true;
   mine [5][299] = true;
   int x , y;
   x = 299;
   y = 5;
   int f = 0;
   while(f == 0){
   char move;
   int amount;
   cin>>move;
   cin>>amount;
   switch(move){
       case 'l':
       for(int c = 1; c<=amount;c++){
       x --;
       if(mine[y][x]==true){
       cout<< x - 300<<" "<<0 - (y+amount-c)<<" DANGER"<<endl;
       f = 1;
       break;
       }
         mine[y][x] = true;
       }
       break;
       case 'd':
       for(int c = 1; c<=amount;c++){
       y ++;
       if(mine[y][x]==true){
       cout<< x - 300<<" "<<0 - (y+amount-c)<<" DANGER"<<endl;
       f = 1;
       break;
       }
         mine[y][x] = true;
       }
       break;
       case 'u':
      for(int c = 1; c<=amount;c++){
      y--;
       if(mine[y][x]==true){
       cout<< (x+amount-c) - 300<<" "<<0 - y<<" DANGER"<<endl;
       f = 1;
       break;
       }
       mine[y][x] = true;
       }
       break;
       case 'r':
      for(int c = 1; c<=amount;c++){
       x ++;
       if(mine[y][x]==true){
       cout<< (x+amount-c) - 300<<" "<<0 - y<<" DANGER"<<endl;
       f = 1;
       break;
       }
         mine[y][x] = true;
       }
        break;
       case 'q':
       f = 1;
       break;

   }
       if(f==0){
       cout<< x - 300<<" "<<0 - y<<" safe"<<endl;
       }
   
}
   	return 0;}