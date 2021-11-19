#include <iostream>
#include <map>

using namespace std;

int main(){
  int M, N, valor, i, j, salario, vet;
  map <string,int> haypoint;
  string palavra;
  cin >> M >> N;
  for(i = 0; i < M; i++){
    cin >> palavra >> valor;
    haypoint[palavra] = valor;
  }
  for(j = 0; j < N; j++){
    salario = 0;
    while(cin >> palavra && palavra != "."){
      if(palavra != "."){
        salario += haypoint[palavra];
      }
    }
    cout << salario << endl;
  }
}