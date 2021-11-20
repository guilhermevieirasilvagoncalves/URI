#include <iostream>
#include <queue> 

using namespace std;

int main(){
  int n, i; 
  queue<int> pilha;
  while(cin >> n){
    if(n == 0){
      break;
    }
    for(i = 1; i <= n; i++){
      pilha.push(i);
    }
    cout<<"Discarded cards: ";
    while(pilha.size() != 1){
      cout << pilha.front();
      if(pilha.size() > 2){ 
      cout << ", "; 
      }
      pilha.pop();
      pilha.push(pilha.front());
      pilha.pop();
    }
    cout << "\n" << "Remaining card: " << pilha.front() << endl;
    while(!pilha.empty()) pilha.pop();
  }
}
