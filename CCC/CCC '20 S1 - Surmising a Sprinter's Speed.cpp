#include <bits/stdc++.h>
using namespace std;
int n;
vector<pair<double,double > > pos;
int main(){
  cin>>n;
  double a,b;
  for(int i = 0; i< n; i++){
    cin>>a>>b;
    pos.push_back(make_pair(a,b));
  }
  sort(pos.begin(),pos.end());

  double maxspeed = 0;
  for(int i = 0; i< pos.size();i++){
    double speed = abs(pos[i].second-pos[i+1].second)/abs(pos[i].first-pos[i+1].first);
    if(speed>maxspeed)
    maxspeed = speed;
    }

  cout<<fixed<<setprecision(5)<<maxspeed<<endl;
return 0;
}