#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main() {

  int n, q;
  cin>>n>>q;
  vector<int> freq(100000);
  int x;

  for(int i = 1; i <= n; i++){
    cin>>x;
    freq[x]++;
  } 

  int a, b;

  for(int i = 0; i < q; i++){

    cin>>a>>b;

    if(a == 1){
      if(b % 2 == 0){
        freq[b/2] += freq[b]+freq[b];
      }
      else{
        freq[b/2] += freq[b];
        freq[(b/2) + 1] += freq[b];
      }
      freq[b] = 0;
    }

    else{
      cout<<freq[b]<<endl;
    }
  }

  return 0;
}