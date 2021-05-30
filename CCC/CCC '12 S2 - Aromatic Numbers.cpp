#include <bits/stdc++.h>

using namespace std;

class roman{

  public:
    roman(string);
    int solve();

  private:
    vector<int> A;
    vector<char> R;
    map<char, int> m = {
      {'M', 1000},
      {'D', 500},
      {'C', 100},
      {'L', 50},
      {'X', 10},
      {'V', 5},
      {'I', 1}, 
    };

};

roman::roman(string s){
  for(int i = 0; i < s.size(); i += 2){
    A.push_back(s[i]-'0');
    R.push_back(s[i+1]);
  }
}

int roman::solve(){

  int ans = 0;

  for(int i = 0; i < A.size(); i++){
    int num = A[i]*m[R[i]];
    if(m[R[i]] < m[R[i+1]]){
      ans -= num;
    }
    else{
      ans += num;
    }
  }
  return ans;
}

int main() {

  string s;
  cin>>s;
  roman a(s);

  cout<<a.solve()<<endl;;

    return 0;
}