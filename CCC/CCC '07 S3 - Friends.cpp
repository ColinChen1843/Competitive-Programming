#include <iostream>
#include <vector>
#include <map>
using namespace std;
map<int,int>friends;
vector<int> queue;
vector<int>seen;
int search(int a, int current, int b, int count){
if(current == a)
return -1;
if(current == b)
return count;
else{
  int current1 = friends[current];
  return search(a,current1,b,count+1); 
}
}


int main() {
  int n;
  cin>>n;
  int x,y;
  for(int i = 0; i < n; i++){
    cin>>x>>y;
    friends.insert({x,y});
  }
  while(1){
  int a,b;
    cin>>a>>b;
    if(a==0&&b==0)
    break;
    int c = search(a,friends[a],b,0);
    if(c == -1)
    cout<<"No"<<endl;
    else
    cout<<"Yes "<<c<<endl;
    }
    return 0;
}