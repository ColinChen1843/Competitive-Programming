#include <bits/stdc++.h>

using namespace std;
int main() {
  string s;
  cin>>s;
  vector<int> freq(26);
  
  for(int i = 0; i < s.size(); i++) freq[s[i] - 97]++;

  sort(freq.begin(), freq.end());

  int ans = s.size() - freq[freq.size() - 2] - freq[freq.size() - 1]; 
  cout<<ans<<endl;
  return 0;
}