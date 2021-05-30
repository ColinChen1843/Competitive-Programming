#include <bits/stdc++.h>

using namespace std;

int main() {

  vector<pair<int,int>> rect(4);

  int n, m;

  for(int i = 1; i <= 3; i++){
    cin>>n>>m;
    rect[i].first = max(n, m);
    rect[i].second = min(n, m);
  }
  
  sort(rect.begin(), rect.end());

  int l = rect[3].first, w = rect[3].first - rect[3].second;

  if(rect[2].first == w && rect[1].second == w){
    if(rect[2].second + rect[1].first == l){
      cout<<"YES"<<endl;
      return 0;
    }
  }

  if(rect[2].second == w && rect[1].first == w){
    if(rect[2].first + rect[1].second == l){
      cout<<"YES"<<endl;
      return 0;
    }
  }

  if(rect[2].first == w && rect[1].first == w){
    if(rect[2].second + rect[1].second == l){
      cout<<"YES"<<endl;
      return 0;
    }
  }

  if(rect[2].second == w && rect[1].second == w){
    if(rect[2].first + rect[1].first == l){
      cout<<"YES"<<endl;
      return 0;
    }
  }

  cout<<"NO"<<endl;

  return 0;
}