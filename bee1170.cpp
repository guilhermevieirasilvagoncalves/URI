#include <bits/stdc++.h>

using namespace std;

int quant;

int dias(double c){
    quant++;
    if(c <= 1){
        return 1;
    }
    return dias(c/2);
}

int main(int argc, char const *argv[])
{
    int N;
    cin >> N;
    while (N--)
    {
        double C;
        cin >> C;
        quant = 0;
        int a = dias(C);
        cout << quant-1 << " dias" << endl;
    }
    
}
