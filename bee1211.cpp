#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(){
  int N, i, j, cont;
  string numeros, primeiro;
  while(cin >> N){
    vector<string> listanumeros;
    for(i = 0; i < N; i++){
      cin >> numeros;
      listanumeros.push_back(numeros);
    }
    sort(listanumeros.begin(), listanumeros.end());
    primeiro = listanumeros[0];
    cont = 0;
    for(i = 1; i < N; i++){
      for(j = 0; j < primeiro.length(); j++){
        if(primeiro[j] == listanumeros[i][j]){
          cont++;
        }
        else{
          break;
        }
      }
      primeiro = listanumeros[i];
    }
    cout << cont << endl;
  }
}
