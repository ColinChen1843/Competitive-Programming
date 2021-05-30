#include <bits/stdc++.h>

using namespace std;

int main() {

  int t, m;
  cin>>t;
  while(t--){
    cin>>m;
    map<int, pair<bool, int>> seen;
    seen[m] = {true, 0};
    int cycle, time;

    for(int i = 1; 1; i++){
      int new_m = 0, digits = ((int) log10((double) m))+1;
      for(int j = 1; j <= digits; j++){
        new_m += pow((int) m % 10, digits);
        m /= 10;
      }
      m = new_m;
      if(seen[m].first == true){
        cycle = i - seen[m].second;
        time = seen[m].second;
        break;
      }
      else{
        seen[m].first  = true;
        seen[m].second = i;
      }
    }

    if(cycle == 1){
    cout<<"Equilibrium: Bob's investment becomes $"<<m<< " after "<<time<<" second(s)!"<<endl;
    }

    else{
      cout<<"Instability: Loop of length "<<cycle<< " encountered after "<< time <<" second(s)!"<<endl;
    }

  }

    return 0;
}