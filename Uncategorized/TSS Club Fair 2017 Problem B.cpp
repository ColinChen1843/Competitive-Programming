#include <bits/stdc++.h>

using namespace std;
#define int long long
int n, q, x, y;
vector<int> houses;

int bsearch(int x){

  int l = 0, r = n - 1; 
  int mid;
  int ans = -1;

  while(l <= r){  
    mid = l + ((r - l)/2);
    if(houses[mid] > x){
      r = mid - 1;
    }
    else{
      ans = mid;
      l = mid + 1;
    }
  }

  return ans;

}

signed main() {

  cin>>n>>q;
  for(int i = 1; i <= n; i++){
    cin>>x>>y;
    houses.push_back(ceil(sqrt(x*x + y*y)));
  }

  sort(houses.begin(), houses.end());
  int a;
  for(int i = 0; i < q; i++){
    cin>>a;
    int ans = bsearch(a);
    
    cout<<ans+1<<endl;

  }

  return 0;
}