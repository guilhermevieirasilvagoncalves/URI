#include <iostream>
#include <map>
#include <stack>
#include <string>

using namespace std;

int main(){
  map <char, float> valornotas;
  stack<char> composicao;
  valornotas['W'] = 1.0;
  valornotas['H'] = 0.5;
  valornotas['Q'] = 0.25;
  valornotas['E'] = 0.125;
  valornotas['S'] = 0.0625;
  valornotas['T'] = 0.03125;
  valornotas['X'] = 0.015625;
  int compD, i;
  float soma;
  string compasso;
  while(getline(cin, compasso)){
    if(compasso == "*"){
      break;
    }  
    compD = 0;
    for(int i=0;i<compasso.length();i++){
      if(compasso[i] != '/'){
        composicao.push(compasso[i]);
      }
      if(compasso[i]=='/'&&!composicao.empty()){
        soma = 0;
        while(!composicao.empty()){
          if(composicao.top() == 'W'){
            soma = soma + valornotas['W'];
          }
          if(composicao.top() == 'H'){
            soma = soma + valornotas['H'];
          }
          if(composicao.top() == 'Q'){
            soma = soma + valornotas['Q'];
          }
          if(composicao.top() == 'E'){
            soma = soma + valornotas['E'];
          }
          if(composicao.top() == 'S'){
            soma = soma + valornotas['S'];
          }
          if(composicao.top() == 'T'){
            soma = soma + valornotas['T'];
          }
          if(composicao.top() == 'X'){
            soma = soma + valornotas['X'];
          }
          composicao.pop();
        }
        if(soma == 1){
          compD++;
        }
      }
    }
    cout << compD << endl;
  }
}