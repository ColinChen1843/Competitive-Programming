#include <bits/stdc++.h>

using namespace std;
vector<int>num;
vector<int> convert(int x){

  if(x == 0) return num;

  num.push_back(x%2);

  return convert(x/2);

}

int main() {
  int n, m, k;
  cin>>n>>m>>k;
  vector<int> N = convert(n);
  num.clear();
  vector<int> M = convert(m); 
  int purp = 0, blue = 0;
  for(int i = 0; i < k; i++){
    if(M[i] == N[i]) purp++;
    else blue++;
  }

  cout<<blue<<" "<<purp<<endl;

    return 0;
}