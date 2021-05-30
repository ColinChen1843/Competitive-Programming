#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  char x;
  cin>>n;
  bool rna = false, dna = false, neither = false;
  for(int i = 0; i < n; i++){
    cin>>x;
    if(x!='A'&&x!='C'&&x!='G'&&x!='T'&&x!='U'){
      cout<<"neither"<<endl;
      neither = true;
      break;
    }
    if(x == 'T') dna = true;
    if(x == 'U') rna = true;
  }
  if(!neither){
    if(dna && rna) cout<<"neither"<<endl;
    else if(dna) cout<<"DNA"<<endl;
    else if(rna) cout<<"RNA"<<endl;
    else cout<<"both"<<endl;
  }
    return 0;
}