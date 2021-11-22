#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool comparacao(char x , char y){
  return (x == 'B' && y == 'S') || (y ==  'B' && x == 'S') || (x == 'C' && y == 'F') || (y == 'C' && x == 'F');
}

int main(){
  int i,cont,t;
  string fitas; 
  while(cin >> fitas){
    stack<char> rna;
    cont = 0;
    for(i = 0; i < fitas.length(); i++){
      if(!rna.empty() && comparacao(fitas[i],rna.top())){
          cont++;
          rna.pop();
      }
      else{
          rna.push(fitas[i]);
        }
      }
    cout << cont << endl;
    cont = 0;
    while(!rna.empty()) rna.pop();
  }
}
