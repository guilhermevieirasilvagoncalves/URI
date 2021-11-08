#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
    int n;
    set<int, greater<>> notaseq;
    set<int>::iterator itr;
    cin >> n;
    while (n--) {
        int i, m, dif = 0;
        cin >> m;
        int nota[m];
        for (i = 0; i < m; i++) {
            cin >> nota[i];
            notaseq.insert(nota[i]);
        }
        for (itr = notaseq.begin(), i = 0; itr != notaseq.end(); ++itr, i++) {
            if (nota[i] == *itr) {
                dif++;
            }
        }
        cout << dif << endl;
        notaseq.clear();
    }
}