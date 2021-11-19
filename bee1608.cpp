#include <iostream>

using namespace std;

int main(){
  int T,D,I,B,Q, ingrediente[100],indice, quant, quantbolo,total = 0,cont = 0;
  cin >> T;
  while(T--){
    cin >> D >> I >> B;
    int valor;
    for(int i = 0; i < I; i++){
      cin >> valor;
      ingrediente[i] = valor;
    }
    int maior = 0;
    for(int i = 0; i < B; i++){
      cin >> Q;
      for(int j = 0; j < Q; j++){
        cin >> indice >> quant;
        quantbolo = quant * ingrediente[indice] + quantbolo;
      }
      if(quantbolo <= D){
        total = quantbolo;
        while(total <= D){
          cont++;
          total = quantbolo + total;
        }
      }
      quantbolo = 0;
      if(cont > maior){
        maior = cont;
      }
      cont = 0;
    }
    cout << maior << endl;
  }
}
