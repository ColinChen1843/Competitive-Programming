#include <bits/stdc++.h>

using namespace std;
int n, m, input;
bool dp[101][10001] = {false};
vector <int> prices;
vector <int> primes;

bool primecheck(int a){
  bool d = true;
  for(int i = 2; i <= sqrt(a); i++){
    if(a % i == 0){
    d = false;
    break;
    }
  }
  return d;
}

int main() {
  primes.push_back(2);
  primes.push_back(3);
  primes.push_back(5);
  primes.push_back(7);
  primes.push_back(11);
  primes.push_back(13);
  primes.push_back(17);
  primes.push_back(23);
  primes.push_back(29);
  primes.push_back(31);
  primes.push_back(37);
  primes.push_back(41);
  primes.push_back(43);
  primes.push_back(47);
  primes.push_back(53);
  primes.push_back(59);
  primes.push_back(61);
  primes.push_back(67);
  primes.push_back(71);
  primes.push_back(73);
  primes.push_back(79);
  primes.push_back(83);
  primes.push_back(89);
  primes.push_back(97);
  cin>>n>>m;
  prices.push_back(0);
  for(int i = 0; i < m; i++){
    cin>>input;
    prices.push_back(input);
  }
  dp[0][0] = true;
  for(int i = 1; i <= m; i++){
    for(int ii = 1; ii <= n; ii++){
      for(int iii = 0; iii < 24; iii++){
          if (ii - (prices[i] * primes[iii]) >= 0 && dp[i - 1][ii - (prices[i] * primes[iii])] == true){
            dp[i][ii] = true;
            break;
          }    
      }
    }
  }

  bool ans = false;
  for(int i = 0; i <= n; i++){
    if(dp[m][i] == true){
      if(primecheck(i) == true){
        cout<<"its primetime"<<endl;
        ans = true;
        break;
      }
    }
  }
  if(ans == false)
  cout<<"not primetime"<<endl;
    return 0;
}