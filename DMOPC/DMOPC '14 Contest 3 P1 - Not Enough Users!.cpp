#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, k, d;

  cin>>n>>k>>d;

  int users = n;

  for(int i = 1; i <= d; i++){
    users *= k;
  }

  cout<<users<<endl;

  return 0;
}