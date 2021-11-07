#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
    set<string> s;
    string joias;
    while (cin >> joias) {
        s.insert(joias);
    }
    int quant = s.size();
    cout << quant << endl;
    return 0;
}
