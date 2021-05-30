#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, h;
  cin>>n>>h;
  vector<pair<char, int>> moves(3001);
  int ch = h, bh = h;

  for(int i = 0; i < 2*n; i += 2){
    cin>>moves[i].first>>moves[i].second;
  }

  for(int i = 1; i < 2*n; i +=2 ){
    cin>>moves[i].first>>moves[i].second;
  }

  for(int i = 0; i < 2*n; i++){
    if(i % 2 == 0){
      
      if(moves[i].first == 'A' && i == 0){
          bh -= moves[i].second;
      }

      else if(moves[i].first == 'A' && moves[i-1].first != 'D'){
        bh -= moves[i].second;
      }
      if(moves[i].first == 'D' && moves[i + 1].first != 'A'){
        ch -= moves[i].second;
      }
    }
    if(i % 2 == 1){
      if(moves[i].first == 'A' && moves[i-1].first != 'D'){
        ch -= moves[i].second;
      }
      if(moves[i].first == 'D' &&  i == 2*n-1) bh -= moves[i].second;
      else if(moves[i].first == 'D' &&  moves[i + 1].first != 'A'){
        bh -= moves[i].second;
      }
    }

    if(bh <= 0){
      cout<<"VICTORY"<<endl;
      return 0;
    }
    if(ch <= 0){
      cout<<"DEFEAT"<<endl;
      return 0;
    }
  }

  cout<<"TIE"<<endl;

    return 0;
}