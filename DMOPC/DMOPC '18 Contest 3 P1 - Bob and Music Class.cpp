#include <bits/stdc++.h>
using namespace std;

  int main(){
    vector<int> notes(3);
    vector<string> scale (12); 
    scale = {"A", "A#", "B", "C", "C#", "D", "D#", "E", "F", "F#", "G", "G#"};
    vector<string> x(3);
    for(int i = 0; i < 3; i++){
      cin>>x[i];
      for(int j = 0; j < 12; j++){
        if(scale[j] == x[i]) notes[i] = j;
      }
    } 

    int diff1, diff2;
    diff1 = notes[1] - notes[0];
    if(diff1 < 0) diff1 += 12;
    diff2 = notes[2] - notes[1];
    if(diff2 < 0) diff2 += 12;

    if(diff1 == 4 && diff2 == 3){
      cout<<x[0]<<endl;
      cout<<"major"<<endl;
      cout<<"root position"<<endl;
      return 0;
    }

    if(diff1 == 3 && diff2 == 4){
      cout<<x[0]<<endl;
      cout<<"minor"<<endl;
      cout<<"root position"<<endl;
      return 0;
    }

    if(diff1 == 4 && diff2 == 4){
      cout<<x[0]<<endl;
      cout<<"augmented"<<endl;
      cout<<"root position"<<endl;
      return 0;
    }

    if(diff2 == 4 && diff1 == 4){
      cout<<x[0]<<endl;
      cout<<"augmented"<<endl;
      cout<<"root position"<<endl;
      return 0;
    }

    if(diff1 == 3 && diff2 == 3){
      cout<<x[0]<<endl;
      cout<<"diminished"<<endl;
      cout<<"root position"<<endl;
      return 0;
    }

    vector<int> notes2(3);
    string x2;
    x2 = x[2];

    notes2[0] = notes[2];
    notes2[1] = notes[0];
    notes2[2] = notes[1];

    diff1 = notes2[1] - notes2[0];
    if(diff1 < 0) diff1 += 12;
    diff2 = notes2[2] - notes2[1];
    if(diff2 < 0) diff2 += 12;

    if(diff1 == 4 && diff2 == 3){
      cout<<x2<<endl;
      cout<<"major"<<endl;
      cout<<"first inversion"<<endl;
      return 0;
    }

    if(diff1 == 3 && diff2 == 4){
      cout<<x2<<endl;
      cout<<"minor"<<endl;
      cout<<"first inversion"<<endl;
      return 0;
    }

    if(diff1 == 3 && diff2 == 3){
      cout<<x2<<endl;
      cout<<"diminished"<<endl;
      cout<<"first inversion"<<endl;
      return 0;
    }

    vector<int> notes3(3);
    string x3 = x[1];

    notes3[0] = notes[1];
    notes3[1] = notes[2];
    notes3[2] = notes[0];

    diff1 = notes3[1] - notes3[0];
    if(diff1 < 0) diff1 += 12;
    diff2 = notes3[2] - notes3[1];
    if(diff2 < 0) diff2 += 12;

    if(diff1 == 4 && diff2 == 3){
      cout<<x3<<endl;
      cout<<"major"<<endl;
      cout<<"second inversion"<<endl;
      return 0;
    }

    if(diff1 == 3 && diff2 == 4){
      cout<<x3<<endl;
      cout<<"minor"<<endl;
      cout<<"second inversion"<<endl;
      return 0;
    }

    if(diff1 == 3 && diff2 == 3){
      cout<<x3<<endl;
      cout<<"diminished"<<endl;
      cout<<"second inversion"<<endl;
      return 0;
    }

    return 0;
  }