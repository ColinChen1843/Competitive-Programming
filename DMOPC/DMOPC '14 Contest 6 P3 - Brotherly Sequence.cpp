#include <bits/stdc++.h>

using namespace std;

int main() {
int n;
cin>>n;
vector<int> a(n);

for(int i = 0; i < n; i++){
  cin>>a[i];
}

int curr = 0, ans = 0;

for(int i = 0; i <= n; i++){

  if(i == n){
    ans = max(ans, curr);
  }

  if(i == 0){
    curr++;
  }

  else if(abs(a[i-1]-a[i]) <= 2){
    curr++;
  }

  else{
    ans = max(ans, curr);
    curr = 1;
  }

}

cout<<ans<<endl;

  return 0;
}