#include <bits/stdc++.h>

using namespace std;
int main() {
  double n, m; 
  int y;
  cin>>n>>m>>y;
  double interest = 1 + (m/100);
  cout<<0<<" "<<fixed<<setprecision(2)<<n<<endl;
  for(int i = 1; i <= y; i++){
    double ans = n*interest;
    cout<<i<<" "<<fixed<<setprecision(2)<<ans<<endl;
    n = ans;
  }

  return 0;
}