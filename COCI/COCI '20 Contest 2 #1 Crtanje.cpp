#include <bits/stdc++.h>
using namespace std;

int main(){

int n;
cin>>n;

vector<string> grid(2001);

char x;
int curr = 1000, currc = 0;

for(int i = 0; i < 2001; i++){
  for(int j = 0; j < n; j++){
    grid[i] += '.'; 
  }
}

for(int i = 0; i < n; i++){

  cin>>x;

  if(x == '+'){
    grid[curr][currc] = '/';
    curr--;
    currc++;
  }
  if(x == '-'){
    curr++;
    grid[curr][currc] = '\\';
    currc++;
  }
  if(x == '='){
    grid[curr][currc] = '_';
    currc++;
  }

}
for(int i = 0; i < 2001; i++){

  if(grid[i].find('\\') < 1001){
      cout<<grid[i]<<endl;
  }

  else if(grid[i].find('/') < 1001){
    cout<<grid[i]<<endl;
  }
  else if(grid[i].find('_') < 1001){
    cout<<grid[i]<<endl;
  }

}

  return 0;
}