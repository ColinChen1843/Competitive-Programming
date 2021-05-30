#include <bits/stdc++.h>

using namespace std;
int n,input;
vector <int> st;
vector <int> gu;
vector <int> iv;

int mem[150001][2][2][2][4];
bool mems [150001][2][2][2][4] = {false};

int solve(int curr, bool s, bool i, bool g, int prev){
  if(mems[curr][s][i][g][prev] == true)
  return mem[curr][s][i][g][prev];

  if(curr == n){
    mems[curr][s][i][g][prev] = true;
    if(s == true && i == true && g == true){
    return mem[curr][s][i][g][prev] = 0;
    }
    else
    return mem[curr][s][i][g][prev] = 750001;
  }
  
  mems[curr][s][i][g][prev] = true;
  int a = 750001, b = 750001, c = 750001, d = 7500001;
  if(s == false || prev == 1){
  a = solve(curr+1,true,i,g,1) + st[curr];
  } 
  if(i == false || prev == 2){
  b = solve(curr+1,s,true,g,2) + iv[curr];
  }

  if(g == false || prev == 3){
  c = solve(curr+1,s,i,true,3) + gu[curr];
  }

  d = min(a,b);
  return mem[curr][s][i][g][prev] = min(d,c);
}

int main() {
  cin>>n;
  for(int i = 0; i < n; i++){
    cin>>input;
    st.push_back(input);
  }
    for(int i = 0; i < n; i++){
    cin>>input;
    iv.push_back(input);
  }
    for(int i = 0; i < n; i++){
    cin>>input;
    gu.push_back(input);
  }

  cout<<solve(0,false,false,false,0);
    return 0;
}