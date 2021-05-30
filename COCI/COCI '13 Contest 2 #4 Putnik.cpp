#include <iostream>
#include <algorithm>
using namespace std;
int n;
int cities[1501][1501];
int mem[1501][1501];
int shortest(int current, int lastf, int lastb){
  if(mem[lastf][lastb] !=0)
  return mem[lastf][lastb];
  if(current == n)
  return mem[lastf][lastb]=shortest(current-1,n,lastb);
  if(current == 1)
  return cities[lastf][current] + cities[lastb][current];
  else{
int a = shortest(current-1, current,lastb)+cities[lastf][current];
int b = shortest(current-1,lastf,current)+cities[lastb][current];
return mem[lastf][lastb]=min(a,b);
  }
}

int main() {
  cin>>n;
  for(int i = 1; i <= n; i++){
  for(int c = 1; c<=n; c++)
  cin>>cities[i][c];
  }
  int* sequence = new int[n];
cout<<shortest(n,0,0);
 return 0;
}