#include <iostream>
#include <map>
#include <stdio.h>

using namespace std;

int main(){
    int N,M,P,quant;
    string frutanome;
    double preco, precototal;
    map<string,double> frutas;
    cin >> N;
    while(N--){
        precototal = 0;
        cin >> M;
        for(int i = 0; i < M; i++){
            cin >> frutanome >> preco;
            frutas[frutanome] = preco;
        }
        cin >> P;
        for(int i = 0; i < P; i++){
            cin >> frutanome >> quant;
            precototal += frutas[frutanome]*quant;
        }
        printf("R$ %.2lf\n",precototal);
        frutas.clear();
    }

}