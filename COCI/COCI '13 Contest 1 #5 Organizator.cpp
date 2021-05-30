#include <bits/stdc++.h>

using namespace std;
long long int n;
vector<long long int> clubs;
long long int freq[12000001];
int main() {
  cin>>n;
  clubs.resize(n+1);
  for(int i = 1; i <= n; i++){
    cin>>clubs[i];
    freq[clubs[i]]++;
  }

  long long int ans = 0, max = 0, teams = 0;

  sort(clubs.begin(), clubs.end());
  for(int i = 1; i <= clubs[n]; i++){
    for(int j = i; j <= clubs[n]; j+=i){
      if(freq[j]>0){ 
        ans += freq[j]*i;
        teams+=freq[j];
      }
    }
      if(ans > max && teams > 1) max = ans;

      ans = 0;
      teams = 0;
  }
  cout<<max<<endl;
    return 0;
}