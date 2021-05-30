#include <bits/stdc++.h>

using namespace std;

#define int long long

int n, q;
vector<int> but;

map<int, int> mems;

int b_search(double opt, double w){

  int l = 1, r = but.size() - 1;

  while(l <= r){

    int mid = l + (r - l)/2;

    if(but[mid] == opt){
      return but[mid];
    }

    if(r - l == 1){

      double ans1, ans2;
      ans1 = but[l] + w/but[l];
      ans2 = but[r] + w/but[r];

      if(ans1 <= ans2){
        return but[l];
      }
      return but[r];
    }

    if(but[mid] > opt){
      r = mid;
    }

    if(but[mid] < opt){
      l = mid;
    }

  }
  return 0;
}

signed main() {

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin>>n>>q;

  int input;
  but.push_back(0);

  for(int i = 1; i <= n; i++){
    cin>>input;

    if(mems[input] == 0){
      but.push_back(input);
      mems[input] = i;
    }

  }

  sort(but.begin(), but.end());

  double w;

  for(int i = 1; i <= q; i++){

    cin>>w;

    double opt = sqrt(w); 

    int ans = mems[b_search(opt, w)];

    cout<<ans<<" ";

  }
    return 0;
}