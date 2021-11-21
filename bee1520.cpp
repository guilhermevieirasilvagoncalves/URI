#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main(){
  int N, parafusos, porcas, Num, i, cont, auxi, auxf,limit ,j, k;
  multiset<int> lotes;
  vector<int> lotesord;
  multiset<int>::iterator itr;
  while(cin >> N){
    while(N--){
      cin >> parafusos >> porcas;
      for(i = parafusos; i <= porcas; i++){
          lotes.insert(i);
      }
    }
    for(itr = lotes.begin(); itr != lotes.end(); ++itr){
        lotesord.push_back(*itr);
      }
    cin >> Num;
    for(k = 0; k < lotesord.size();k++){
      if(lotesord[k] == Num && limit == 0){
        auxi = k;
        limit = 1;
      }
      if(lotesord[k] == Num && limit == 1){
        auxf = k;
      }
    }
    if(limit > 0){
      cout << Num << " found from " << auxi << " to " << auxf << endl; 
    }
    else{
      cout << Num << " not found" << endl;
    }
    lotes.clear();
    lotesord.clear();
    limit = 0;
  }
}
