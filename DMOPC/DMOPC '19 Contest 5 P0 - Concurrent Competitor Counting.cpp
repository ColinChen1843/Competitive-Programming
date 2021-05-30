#include <iostream>
#include <string>
using namespace std;
int main() {
  int n,c,score;
  cin>>n>>c;
  string name;
  for(int i = 1; i <= n; i++){
    cin>>name>>score;
    if(score>c)
    cout<<name<<" will advance"<<endl;
    else
    cout<<name<<" will not advance"<<endl;
  }
  return 0;
}