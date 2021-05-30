#include <bits/stdc++.h>

using namespace std;

int main() {

  int n; 
  cin>>n;
  vector<int>a(n), b(n);
  for(int i = 0; i < n; i++){
    cin>>a[i];
  }
  for(int i = 0; i < n; i++){
    cin>>b[i];
  }

  int ans = 0;
  bool start = false;

  for(int i = 0; i < n; i++){
    if(a[i] == b[i] && !start){
      ans++;
      start = true;
    }
    else if(start && a[i] != b[i]){
      start = false;
    }
  }

  cout<<ans<<endl;

    return 0;
}