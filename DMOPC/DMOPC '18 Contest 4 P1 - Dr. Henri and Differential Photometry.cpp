#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, k;
  double x, y;
  cin>>k>>x;
  double sum = 0;
  for(int i = 0; i < k; i++){
    cin>>n;
    double num = x;
    for(int j = 0; j < n; j++){
      cin>>y;
      num += y;
    }
    sum += num;
  }

  double avg = sum/k;

  cout<<fixed<<setprecision(6)<<avg<<endl;

  return 0;
}