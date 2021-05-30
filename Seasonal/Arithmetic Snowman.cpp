#include <bits/stdc++.h>

using namespace std;
int freq[100001];
vector<int> balls;
int main() {
  int n,input,a,b,c,sum;
  cin>>n;
  for(int i = 0; i < n; i++){
    cin>>input;
    balls.push_back(input);
    freq[input]++;
  }
  int max = 0;
  sort(balls.begin(),balls.end());
  for(int i = 0; i < n; i++){
    for(int ii = i + 1; ii < n; ii++){
      a = balls[i];
      b = balls[ii];
      c = b + (b - a);
      if(a == b && freq[a]>=3){
        sum = a + b + c;
        if(sum>max)
        max = sum;
      }
      if(c<=100000 && a != b && freq[c] >= 1){
        sum = a + b + c;
        if(sum>max)
        max = sum;
      }
    }
  }
  cout<<max<<endl;
    return 0;
}