#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int mem [1001][1001];
bool mems [1001][1001] = {false};
int woo(int heightsleft, vector <int> &heights, int current, int last){
    if(mems[current][last] == true){
    return mem[current][last];
    }
    else{
if(heightsleft == 0){
mems[current][last] = true;
mem[current][last] = 0;
return 0;
}
if(heights[current] <= last){
mems[current][last] = true;
mem[current][last] = woo(heightsleft-1,heights, current + 1, last);
return woo(heightsleft-1,heights, current + 1, last);
}
else{
mems[current][last] = true;
mem[current][last] = max(woo(heightsleft-1,heights, current + 1,heights[current]) + heights[current] , woo(heightsleft-1,heights, current + 1,last));
return max(woo(heightsleft-1,heights, current + 1,heights[current]) + heights[current] , woo(heightsleft-1,heights, current + 1,last));
}
}

}

int main()
{
   int n;
   cin>>n;
   vector <int> heights;
   for(int i = 0; i<n;i++){
   int input;
   cin>>input;
   heights.push_back(input);
   }
   int heightsleft = n;
   int current = 0;
   int last  = 0;
  cout<< woo(heightsleft, heights , current,last);
    return 0;
}