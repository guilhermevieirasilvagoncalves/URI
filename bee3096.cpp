#include <bits/stdc++.h>

using namespace std;

long long countdigits(int n){
    if(n <= 1)
        return n;
    else{
        double x = ((n * log10(n / M_E)) + (log10(2 * M_PI * n) / 2.0)); 
        return floor(x) + 1;
    }
}


int main(int argc, char const *argv[])
{   
    int N;
    cin >> N;
    long long int fat;

    fat = countdigits(N);
    cout << fat << endl;
}
