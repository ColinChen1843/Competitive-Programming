#include <bits/stdc++.h>
using namespace std;

  int main(){
    int n;
    int freq[200001];
    cin>>n;
    memset(freq, 0, sizeof freq);
    for(int i = 0; i < n; i++){
      int x;
      cin>>x;
      freq[x + 100000]++;
    }
  vector<int> ans;
  int max = 0;
  for(int i = 0; i < 200001; i++){
    if(freq[i] > max){
      max = freq[i];
      ans.clear();
      ans.push_back(i - 100000);
    }
    else if(freq[i] == max){
      ans.push_back(i-100000);
    }
  }

  for(int i = 0; i < ans.size(); i++) cout<<ans[i]<<" ";

    return 0;
  }