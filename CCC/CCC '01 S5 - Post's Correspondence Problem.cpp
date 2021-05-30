#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int m, n;
string as[40];
string bs[40];
string a,b;
vector<int>seq;
vector<int>sq;
void print( vector<int>seq ){
sq.clear();
for(int i = 0; i < seq.size(); i++)
sq.push_back(seq[i]);
}

int post(int c, int curr, string a, string b, vector<int> seq){
if(a.length() > 0 && a == b){
print(seq);
return seq.size();
}

if(seq.size()>=m)
return 0;

if(curr >= n)
return post(c+1,0,a,b,seq);

if(c > 4*n+5)
return 0;

else{
  vector <int> s;
  for(int i = 0; i < seq.size();i++){
  s.push_back(seq[i]);
  }
  seq.push_back(curr+1);
  return max(post(c+1,curr+1,a,b,s),post(c+1,curr,a+as[curr],b+bs[curr],seq));

}
}
int main() {
cin>>m>>n;
for(int i = 0; i < n; i++)
cin>>as[i];
for(int i = 0; i < n; i++)
cin>>bs[i];
if(post(0,0,a,b,seq) == 0)
cout<<"No solution."<<endl;
else{
  cout<<sq.size()<<endl;
  for(int i = 0; i < sq.size(); i++)
  cout<<sq[i]<<endl;
}
  return 0;
}