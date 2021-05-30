#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
  int k;
  string s;
  cin>>k;
  cin>>s;
  string s1;
  s1=s;
int freq[27] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
for(int i = 0; i < k; i++)
freq[s[i]-96]++;

for(int current = k; current < s.length(); current++){
int max = 0;
int mode;
for(int i = 1; i < 27; i++){
if(freq[i]>max){
max = freq[i];
mode = i;
}
} 
if(s1[current]+mode>122)
s1[current] = ((s1[current] + mode) - 122) + 96;
else
s1[current]+=mode;

freq[s[current-k]-96]--;
freq[s[current]-96]++;
}
cout<<s1;
  return 0;
}