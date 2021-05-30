#include <bits/stdc++.h>
using namespace std;

long long int n, score_1, score_2;
char x;
long long int mem [2001][2001];
long long int mems[2001][2001];
long long int ful(long long int u,long long int notu){
  
  if(mem[u][notu] != -1)
  return mem[u][notu];

  if(notu == score_2){
    mem[u][notu] = 1;
    return 1;
  }

  if(u > notu){
    mem[u][notu] = 0;
    return 0;
  }

  else{
   mem[u][notu] = (ful(u+1,notu) + ful(u,notu+1))% 1000000007;
   return mem[u][notu];
  }

}

long long int free(long long int u,long long int notu){

  if(mems[u][notu] != -1)
    return mems[u][notu]; 

  if(u == score_1){
    mems[u][notu] = 1;
    return 1;
  }
    
  if(u <= notu){
    mems[u][notu] = 0;
    return 0;
  }
   
    
  else {

    long long int answer = 0;

  
    if(notu < score_2)
      answer += free(u,notu+1);

    mems[u][notu] = (free(u+1,notu) + answer) % 1000000007;

    return mems[u][notu];

  }
  
}

int main() {
  cin >> n;

  for(int i = 1; i <= n; i++) {
  memset(mem, -1, sizeof(mem));
  memset(mems, -1, sizeof(mems));
    cin >> score_1 >> x >> score_2;

  cout <<"Case #"<<i<<": "<<free(1, 0) << " " << ful(0, 0) << endl;
  }

  return 0;
}