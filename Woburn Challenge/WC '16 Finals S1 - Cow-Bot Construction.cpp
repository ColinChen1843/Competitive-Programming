#include <bits/stdc++.h>

using namespace std;

int n, e, b;
vector<int> m;

int main() {

  cin>>n>>e>>b;
  int input;
  for(int i = 0; i < n; i++){
    cin>>input;
    m.push_back(input);
  }

  sort(m.begin(), m.end());

  if(e <= b){
    cout<<e*n<<endl;
    return 0;
  }

  int installed = 0, ans = 0;
  for(int i = 0; i < n; i++){
    if(installed == n){
      break;
    }
    if(m[i] <= installed){
      ans += b;
      installed++;
    }
    else if(m[i] - installed >= n-installed){
      ans +=e*(n-installed);
      break;
    }
    else{
      ans += e*(m[i] - installed);
      ans += b;
      installed += (m[i] - installed) + 1;
    }

  }

  cout<<ans<<endl;

  return 0;
}