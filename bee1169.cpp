#include <bits/stdc++.h>

using namespace std;


int main(int argc, char const *argv[])
{
    int N;
    cin >> N;
    while (N--)
    {
        int X;
        cin >> X; 
        long double soma = pow(2,X);
        long double quant = soma / 12.;
        long double resp = abs(quant / 1000.);
        cout << (long long int)resp << " kg" << endl;

    }
    
}
