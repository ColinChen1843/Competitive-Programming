#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
   int n,k;
   cin>>n>>k;
   vector <int> layers;
    int input;
    for(int c = 0; c<n;c++){
      cin>>input;
      layers.push_back(input);
    }
    sort(layers.begin(),layers.end());
   int height = 1;
    while(layers.size()>1){
        if(layers.back()-(layers[layers.size()-2]) >= k){
      height++;
      layers.pop_back();
        }
        else
        layers.erase(layers.end()-2);
    }
    cout<<height<<endl;
    return 0;
}