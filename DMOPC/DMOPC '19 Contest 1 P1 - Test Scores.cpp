#include <bits/stdc++.h>

using namespace std;

int main() {
  double N, n, a, b, t;
  cin>>N;

  for(int i = 0; i < N; i++){
    cin>>n>>a>>b>>t;
    double ans = (t+b*n)/(a+b);
    int ans2 = (t+b*n)/(a+b);
    if(ans - ans2 != 0) ans2++;
    if(ans > n) cout<<-1<<endl;
    else cout<<ans2<<endl;
  }

    return 0;
}