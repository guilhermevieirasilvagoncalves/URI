#include <iostream>
#include <stack>

using namespace std;

int main(){
  int n, i, verificar = 0;
  string inp;
  while (getline(cin,inp)) {
    stack<char> Q;
    verificar = 0;
    for(i = 0; i < inp.length(); i++){
      if(verificar == 1){
        break;
      }
      switch(inp[i]){     
        case '(':
          Q.push('(');
          break;
        case ')':
          if(!Q.empty()){
            Q.pop();
            break;
          }
          else{
            Q.push(')');
            verificar = 1;
            break;
          }  
      }
    }
    if(Q.empty()){
      cout << "correct" << endl;
      stack<char> Q;
    }
    else{
      cout << "incorrect" << endl;
    }
    
    if(verificar == 1){
      stack<char> Q;
      verificar = 0;
    }
    
  }
}