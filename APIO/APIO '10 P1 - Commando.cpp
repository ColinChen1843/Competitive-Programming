#include <bits/stdc++.h>

using namespace std;
#define ll long long
ll n, a, b, c, input;
ll troops[1000001];
vector<ll> slopes;
vector<ll> y;
ll dp[1000001];

bool valid_line(ll line1, ll line2, ll line3){

  if((y[line3] - y[line1]) * (slopes[line1] - slopes[line2]) < (y[line2] - y[line1]) * (slopes[line1] - slopes[line3])) return true;

  else return false;

}

void add_line(ll m, ll b){
  
  slopes.push_back(m);
  y.push_back(b);
  while(slopes.size() >= 3 && valid_line(slopes.size() - 3, slopes.size() - 2, slopes.size() - 1)){
    slopes.erase(slopes.end() - 2);
    y.erase(y.end() - 2);
  }

}
ll poll;
ll solve(ll x){
  if(poll >= slopes.size()) poll = slopes.size() - 1;

  while(poll < slopes.size() - 1 && slopes[poll + 1] * x + y[poll + 1] > slopes[poll]*x + y[poll]){
    poll++;
  }

  return slopes[poll] * x + y[poll];

}

int main() {

  cin>>n>>a>>b>>c;

  for(ll i = 1; i <= n; i++){
    cin>>input;
    troops[i] = troops[i - 1] + input;
  }

  dp[1] = (a * troops[1] * troops[1]) + (b * troops[1]) + c ;
  add_line(-2*a*troops[1], dp[1] + a*troops[1]*troops[1]-b*troops[1]);
  for(ll i = 2; i <= n; i++){

    dp[i] = max((a * troops[i] * troops[i]) + (b * troops[i]) + c,  b * troops[i] + a * troops[i] * troops[i] + c + solve(troops[i]));
    add_line(-2*a*troops[i], dp[i] + (a*troops[i]*troops[i])- (b * troops[i]));

  }

  cout<<dp[n]<<endl;
    return 0;
}
