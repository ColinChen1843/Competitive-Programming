#include <bits/stdc++.h>

using namespace std;

int main() {
  unsigned long long int n,k;
  cin>>n>>k;
  if(k>n)
  cout<<k + k*(n/k) - n<<endl;
  else
  cout<<min(n%k,k + k*(n/k) - n);
    return 0;
}