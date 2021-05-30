#include <bits/stdc++.h>

using namespace std;

int main() {

  int n, m;
  cin>>n>>m;
  int ans1 = n%m, ans2 = n%m;

  for(int i = 1; ans1 < 0 && ans2 < 0 && i < 100000000; i++){
    ans1 = (n+(i*m)) % m;
    ans2 = (n-(i*m)) % m;
  }

  cout<<abs(max(ans1, ans2))<<endl;

    return 0;
}