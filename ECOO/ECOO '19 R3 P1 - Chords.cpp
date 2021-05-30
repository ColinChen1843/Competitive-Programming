#include <bits/stdc++.h>

using namespace std;
int main() {
  int t = 10;
  while(t--){
  int n, input;
  vector<bool> notes(1000001);
  vector<int> note;
  cin>>n;
  for(int i = 0; i < n; i++){
    cin>>input;
    note.push_back(input);
    notes[input] = true;
  }

  int ans = 0;

  sort(note.begin(), note.end());
  for(int i = 0; i < n; i++){
    for(int j = 2*note[i]; j <= note[n - 1]; j+=note[i]){
      if(notes[j] == true)
      ans++;
    }
  }
  cout<<ans<<endl;
  }
    return 0;
}