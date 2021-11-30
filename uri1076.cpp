#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main(){
  int T, N, V , A,v , a;
  cin >> T;
  while(T--){
    cin >> N;
    cin >> V >> A;
    vector<vector<int>> g;
    g.resize(V);
    for(int i = 0; i < A; i++){
      cin >> v >> a;
      g[v].push_back(a);
      g[a].push_back(v);
    }
    int count = 0;    
    for(int i = 0; i < V; i++){
      set<int> labirinto;
      set<int>::iterator itr;
      for(int k = 0; k < g[i].size();k++){
        labirinto.insert(g[i][k]);
      }
      for(itr = labirinto.begin(); itr != labirinto.end(); ++itr){
        count++;
      }
    }
    cout << count << endl;
    count = 0;
  }
}
