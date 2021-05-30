#include <bits/stdc++.h>

using namespace std;

class roman{

  public:
    roman(string);
    void to_num();
    void to_num2();
    void to_roman();

  private:
    string s1;
    string s2;
    string s;
    int num1 = 0;
    int num2 = 0;
    int num;

};

roman::roman(string s){

  s1 = s.substr(0, s.find('+'));
  s2 = s.substr(s.find('+') + 1, s.size() - s.find('+')-2);
  this->s = s;
}

void roman::to_num(){

  for(int i = 0; i < s1.size(); i++){

    if(s1[i] == 'M'){
      num1 += 1000;
    }
    if(s1[i] == 'D'){

      num1 += 500;

    }
    if(s1[i] == 'C'){
      if(s1[i+1] == 'D' || s1[i+1] == 'M'){
        num1 -= 100;
      }
      else{
        num1 += 100;
      }
    }
    if(s1[i] == 'L'){
      num1 += 50;
    }
    if(s1[i] == 'X'){
      if(s1[i+1] == 'L' || s1[i+1] == 'C'){
        num1 -= 10;
      }
      else{
        num1 += 10;
      }
    }
    if(s1[i] == 'V'){
      num1 += 5;
    }
    if(s1[i] == 'I'){
      if(s1[i+1] == 'V' || s1[i+1] == 'X'){
        num1 -= 1;
      }
      else{
        num1 += 1;
      }
    }
  }
}

void roman::to_num2(){

  for(int i = 0; i < s2.size(); i++){

    if(s2[i] == 'M'){
      num2 += 1000;
    }
    if(s2[i] == 'D'){

      num2 += 500;

    }
    if(s2[i] == 'C'){
      if(s2[i+1] == 'D' || s2[i+1] == 'M'){
        num2 -= 100;
      }
      else{
        num2 += 100;
      }
    }
    if(s2[i] == 'L'){
      num2 += 50;
    }
    if(s2[i] == 'X'){
      if(s2[i+1] == 'L' || s2[i+1] == 'C'){
        num2 -= 10;
      }
      else{
        num2 += 10;
      }
    }
    if(s2[i] == 'V'){
      num2 += 5;
    }
    if(s2[i] == 'I'){
      if(s2[i+1] == 'V' || s2[i+1] == 'X'){
        num2 -= 1;
      }
      else{
        num2 += 1;
      }
    }
  }
}

void roman::to_roman(){
  num = num1 + num2;
  string b;
  if(num > 1000){
    cout<<s<<"CONCORDIA CUM VERITATE"<<endl;
    return;
  }

  vector<pair<string, int>> chars = {
    {"M", 1000}, 
    {"CM", 900}, 
    {"D", 500}, 
    {"CD", 400}, 
    {"C", 100}, 
    {"XC", 90}, 
    {"L", 50}, 
    {"XL", 40}, 
    {"X", 10}, 
    {"IX", 9}, 
    {"V", 5}, 
    {"IV", 4}, 
    {"I", 1}
  };

  while(num != 0){
    for(int i = 0; i < chars.size(); i++){
      if(num >= chars[i].second){
        b += chars[i].first;
        num -= chars[i].second;
        break;
      }
    }
  }
  cout<<s<<b<<endl;
}

int main() {

  int n;
  cin>>n;

  while(n--){
    
    string s;
    cin>>s;
    roman x(s);
    x.to_num();
    x.to_num2();
    x.to_roman();

  }

    return 0;
}