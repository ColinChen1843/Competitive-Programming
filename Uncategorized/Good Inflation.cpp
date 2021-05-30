#include <bits/stdc++.h>

using namespace std;
#define int long long
int n;
vector<int> a(1000001), d(1000001), m, b;

bool invalid(int l3, int l2, int l1){
  if((b[l3]-b[l1])/(m[l1]-m[l3]) < (b[l2]-b[l1])/(m[l1]-m[l2])) return true;
  
  return false;
}

void add_line(int M, int B){
  m.push_back(M);
  b.push_back(B);

  while(m.size() >= 3 && invalid(m.size()-1, m.size()-2, m.size()-3)){
    m.erase(m.end() - 2);
    b.erase(b.end() - 2);
  }

}



int solve(int x){

  int l = 0, r = m.size() - 1, mid = 0;

  while(l <= r){

    mid = l + (r-l)/2;

    int a = m[mid]*x+b[mid], d = m[mid - 1]*x + b[mid - 1], c = m[mid + 1]*x + b[mid + 1];

    if(mid == 0){
      d = -999999999999999999;
    }

    if(mid == m.size()-1){
      c = -999999999999999999;
    }

    if(a >= d && a >= c){
      return a;
    } 

    if(a <= c){
      l = mid + 1;
    }

    else if(a <= d){
      r = mid - 1;
    }

  }

  return -1;

}

signed main() {

  cin>>n;

  for(int i = 1; i <= n; i++){
    cin>>a[i]>>d[i];
  }

  int dp[1000001];
  dp[n + 1] = 0;
 
  add_line(-(n + 1), 0);

  for(int i = n; i >= 1; i--){
    dp[i] = a[i] + d[i]*i + solve(d[i]); 
    add_line(-i, dp[i]);
  }


  int ans = 0;
  for(int i = 1; i <= n; i++){
    if(dp[i] > ans){
      ans = dp[i];
    }
  }

  cout<<ans<<endl;

  return 0;
}