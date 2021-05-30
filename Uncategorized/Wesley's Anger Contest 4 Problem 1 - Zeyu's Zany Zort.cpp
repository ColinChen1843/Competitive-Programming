#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, q,l, r, x;
  cin>>n>>q;
  int *acorns = new int[n];
  for(int i = 0; i < n; i++){
    cin>>acorns[i];
  }
  for(int i = 0; i < q; i++){
    cin>>x>>l>>r;
    if(x == 1){
      sort(acorns+(l-1),acorns+(r));
    }
    if(x == 2){
      sort(acorns+(l-1),acorns + (r),greater<int>());
    }
   
  }
   for(int i = 0; i < n; i++){
    if(i == n-1)
    cout<<acorns[i]<<"\n";
    else
    cout<<acorns[i]<<" ";
   }
    return 0;
}