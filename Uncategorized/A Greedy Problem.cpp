#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    vector<pair <int,int> > p;
    int q,w;
    for(int i = 0; i < n; i++){
        cin>>q>>w;
        p.push_back(make_pair(q,w));
    }
    int boxes = 0;
    long long int price = 0;
    sort(p.begin(),p.end());
    for(int i = 0; i < n; i++){
        if(boxes + p[i].second > m){
            price += (m-boxes) * p[i].first;
            break;
        }
        boxes+=p[i].second;
        price+=(p[i].first*p[i].second);
    }
    cout<<price<<endl;
}