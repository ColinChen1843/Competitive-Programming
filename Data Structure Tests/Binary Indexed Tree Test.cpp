#include <bits/stdc++.h>

using namespace std;

#define int long long

int n, m;
vector<int> arr, tree, freq(100001), tree2(100002);

int fre(int index){

  int ans = 0;

  while(index > 0){
    ans += tree2[index];
    index -= index & (-index);
  }

  return ans;

}

int sum(int index){

  int ans = 0;

  while(index > 0){
    ans += tree[index];
    index -= index & (-index);
  }

  return ans;

}

void update(int index, int val){
  
  while(index <= n){
    tree[index] += val;
    index += index & (-index);
  }

}

void update2(int index , int index2){

  while(index <= 100000){
    tree2[index] += 1;
    index += index & (-index);
  }

  while(index2 != 0 && index2 <= 100000){
    tree2[index2] -= 1;
    index2 += index2 & (-index2);
  }

}

signed main() {
  
  cin>>n>>m;
  arr.resize(n + 1);
  tree.resize(n + 2);

  for(int i = 1; i <= n; i++){
    cin>>arr[i];
    update(i, arr[i]);
    freq[arr[i]]++;
    update2(arr[i], 0);
  }

  char s;
  int l, r, x, v;

  while(m--){

    cin>>s;
    if(s == 'C'){
      cin>>x>>v;
      update(x, v - arr[x]);
      update2(v, arr[x]);
      arr[x] = v;
    }
    
    else if(s == 'S'){
      cin>>l>>r;
      cout<<sum(r) - sum(l - 1)<<endl; 
    }

    else{
      cin>>v;
      cout<<fre(v)<<endl;
    }

  }

  return 0;
}