#include <bits/stdc++.h>

using namespace std;

int main() {

  int n; 
  string square[36];
  cin>>n;

  for(int i = 0; i < n; i++){
    bool freq[200] = {false};
      cin>>square[i];
      for(int j = 0; j < n; j++){
        int curr = square[i][j] - '0';

        if(freq[curr]){
          cout<<"No"<<endl;
          return 0;
        }
        freq[curr] = true;
      }
  }

  bool freq[200] = {false};

  for(int i = 0; i < n; i++){
    int curr = square[i][0] - '0';

    if(freq[curr]){
      cout<<"No"<<endl;
      return 0;
    }
    freq[curr] = true;
  }

  for(int i = 1; i < n; i++){
    if(square[i][0] <= square[i-1][0]){
      cout<<"Latin"<<endl;
      return 0;
    }
    if(square[0][i] <= square[0][i-1]){
      cout<<"Latin"<<endl;
      return 0;
    }
  }

  cout<<"Reduced"<<endl;

    return 0;
}