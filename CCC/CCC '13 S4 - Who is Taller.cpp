#include <iostream>
#include <map>
#include <vector>
#include <list>
#include <string.h>
using namespace std;
map<int,vector<int> > height;
list<int>qu;
int m,n,p,q;
bool seen[1000000]={false};
bool tall(int current,int q){
seen[current] = true;
qu.push_back(current);
while(qu.size()>0){
  if(qu.front() == q){
    return true;
  }
  current = qu.front();
  qu.pop_front();
  for(int i = 0; i < height[current].size(); i++){
    if(!seen[height[current][i]]){
      seen[height[current][i]] = true;
      qu.push_back(height[current][i]);
    }
  }
}
return false;
}
int main(){
  cin>>n>>m;
  int x,y;
  for(int i = 0; i < m; i++){
    cin>>x>>y;
    height[x].push_back(y);
  }
  cin>>p>>q;
  int a = p;
  int b = q;
if(tall(a,b) == true)
  cout<<"yes"<<endl;
else {
memset(seen,false,sizeof(seen));
if(tall(b,a) == true)
  cout<<"no"<<endl;
else
cout<<"unknown"<<endl;
}

return 0;
}