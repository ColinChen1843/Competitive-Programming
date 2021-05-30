#include <bits/stdc++.h>

using namespace std;

int n;
map<pair<int,int>, vector<pair<int, int>>> pens;
vector<pair<int,pair<int,int>>> g, h;

int id[102], sz[101];

int find(int x){
  int root = x;
  while(root != id[root]){
    id[root] = id[id[root]];
    root = id[root];
  }

  return root;

}

void initialize(){
  for(int i = 0; i <= n + 1; i++){
    id[i] = i;
  }
}

void unify(int p, int q){
  int root1 = find(p), root2 = find(q);

  id[root1] = id[root2];

}

int main() {

  cin>>n;

  for(int i = 1; i <= n; i++){
    int x, input;
    cin>>x;
    vector<int> a;
    id[i] = i;
    for(int j = 0; j < x; j++){
      cin>>input;
      a.push_back(input);
    }
    for(int j = 0; j < x; j++){
      cin>>input;
      pair<int,int> d;
      
      if(j == x - 1){
        d = {min(a[j], a[0]), max(a[0], a[j])};
      }

      else{
        d = {min(a[j], a[j + 1]), max(a[j + 1], a[j])};
      }

      pens[d].push_back({i, input});

    }
  }
  for(auto it : pens){
    if(it.second.size() >= 2){
      g.push_back({it.second[0].second, {it.second[0].first,it.second[1].first}});
      g.push_back({it.second[0].second, {it.second[1].first,it.second[0].first}});
      h.push_back({it.second[0].second, {it.second[0].first,it.second[1].first}});
      h.push_back({it.second[0].second, {it.second[1].first,it.second[0].first}});
    }
    else{
      h.push_back({it.second[0].second, {it.second[0].first,n + 1}});
      h.push_back({it.second[0].second, {n + 1,it.second[0].first}});
    }
  }

  sort(g.begin(), g.end());

  int ans1 = 0, ans2 = 0;
  for(int i = 0; i < g.size(); i++){
    if(find(g[i].second.first) != find(g[i].second.second)){
      ans1 += g[i].first;
      unify(g[i].second.first, g[i].second.second);
    }
  }

  initialize();

  sort(h.begin(), h.end());

  for(int i = 0; i < h.size(); i++){
    if(find(h[i].second.first) != find(h[i].second.second)){
      ans2 += h[i].first;
      unify(h[i].second.first, h[i].second.second);
    }
  }

  cout<<min(ans1, ans2)<<endl;

  return 0;

}