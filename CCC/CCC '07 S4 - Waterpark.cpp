#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int mem [10000];
bool mems [10000] = {false};
int foo(int n, map<int,vector<int>> &slides,int current){
    if(mems[current] == true){
        return mem[current];
    }
    else{
    int ways = 0;
    if(current == n){
    mems[current] = true;
    mem[current] = 1;
    return 1;
    }
    if(slides[current].size() == 0){
    mems[current] = true;
    mem[current] = 0;
    return 0;
    }
    else{
        for(int i = 0; i < slides[current].size(); i++){
            int newcurrent = slides[current][i];
           ways += foo(n,slides, newcurrent);
        }
        mems[current] = true;
            mem[current] = ways;
         return ways;
    }
}
}
int main()
{
    int n;
    cin>>n;
    int input,input2;
    map <int,vector<int>> slides;
    while(1){
       cin>>input>>input2;
       if(input == 0 && input2 == 0)
       break;
     if(slides.count(input) > 0) {
         slides[input].push_back(input2);
     }else {
         slides[input] = vector<int> {input2};
     }
    }
    int current = 1;
    cout<<foo(n,slides,current);
    return 0;
}