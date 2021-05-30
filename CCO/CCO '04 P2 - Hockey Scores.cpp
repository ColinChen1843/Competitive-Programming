#include <bits/stdc++.h>

using namespace std;

int main() {
  
  int n,s;
  cin>>n;

  while(n--){

    cin>>s;

    vector<pair<int, int>> scores(s);
    vector<int> goals(s);
    int a, b;

    for(int i = 0; i < s; i++){
      cin>>a>>b;
      b = abs(b);
      if(a < b)
      scores[i] = make_pair(b, a);
      else
      scores[i] = make_pair(a, b);
    }

    sort(scores.begin(), scores.end());

    int ans = 0;
    bool used[1001] = {false};
    vector<vector<pair<int,int>>> games(1001);

    for(int i = 0; i < s; i++){

      if(used[i] == false){

        ans++;
        int last1 = scores[i].first;
        int last2 = scores[i].second;
        games[ans].push_back(make_pair(last1, last2));

        for(int j = i + 1; j < s; j++){
          if(scores[j].first >= last1 && scores[j].second >= last2 && used[j] == false){
            used[j] = true;
            games[ans].push_back(make_pair(scores[j].first, scores[j].second));
            last1 = scores[j].first;
            last2 = scores[j].second;
          }
        }
      }
    }

    cout<<ans<<endl;
    for(int i = 1; i <= ans; i++){
      for(int j = 0; j < games[i].size(); j++)
        cout<<games[i][j].first<<"-"<<games[i][j].second<<" ";
        cout<<endl;
    }

  }
  return 0;
}