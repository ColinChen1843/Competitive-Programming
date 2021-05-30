#include <bits/stdc++.h>

using namespace std;

int main() {
  int d, t, sum, input;
  cin>>d;
  for(int i = 1; i <= d; i++){
    cin>>t;
    sum = 0;
    for(int j = 0; j < t; j++){
      cin>>input;
      sum += input;
    }

    if(sum == 0) cout<<"Weekend"<<endl;
    else cout<<"Day "<<i<<": "<<sum<<endl;

  }
    return 0;
}