#include <iostream>
using namespace std;
int main()
{
  int n,m;
  cin>>n;
  int *alicetype = new int [n];
  int *alicenum = new int [n];
  for(int c = 0; c<n; c++)
  cin>>alicetype[c];
  for(int c = 0; c<n; c++)
  cin>>alicenum[c];
  int alicevalue = 0;
  for(int c = 0; c<n; c++)
  alicevalue= alicevalue + (alicenum[c]*alicetype[c]);
  
  cin>>m;
  int *carltype = new int [m];
  int *carlnum = new int [m];
  for(int c = 0; c<m; c++)
  cin>>carltype[c];
  for(int c = 0; c<m; c++)
  cin>>carlnum[c];
  int carlvalue = 0;
  for(int c = 0; c<m; c++)
  carlvalue= carlvalue + (carlnum[c]*carltype[c]);
  
  cout<<alicevalue<<" "<<carlvalue<<endl;
   	return 0;}