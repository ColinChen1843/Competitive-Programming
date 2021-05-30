#include <bits/stdc++.h>
using namespace std;

int main(){

int n;
vector<string> words;
string word;

cin>>n;

words.resize(n);

for(int i = 0; i < n; i++)
  cin>>words[i];

cin>>word;

int k = word.length();
int small = 1000;
string ans;

for(int i = 0; i < n; i++){
  if(words[i].length() <= k){
    if(k - words[i].length() < small){ 
      ans = words[i];
      small = k - words[i].length();
    }
  }
}
cout<<ans<<endl;
    return 0;
}