#include <iostream>
#include <vector>
#include <string>
#include <set>

using namespace std;

int main(){
  int N, i, j, cont;
  string numeros, primeiro;
  while(cin >> N){
    vector<string> listanumeros;
    multiset<string> listaord;
    multiset<string>::iterator itr;
    vector<string> listfinal;
    for(i = 0; i < N; i++){
      cin >> numeros;
      listanumeros.push_back(numeros);
    }
    for(i = 0; i < N; i++){
      listaord.insert(listanumeros[i]);
    }
    for(itr = listaord.begin(); itr != listaord.end();++itr){
      listfinal.push_back(*itr);
    }

    primeiro = listfinal[0];
    cont = 0;
    for(i = 1; i < N; i++){
      for(j = 0; j < primeiro.length(); j++){
        if(primeiro[j] == listfinal[i][j]){
          cont++;
        }
        else{
          break;
        }
      }
      primeiro = listfinal[i];
    }
    cout << cont << endl;
  }
}
