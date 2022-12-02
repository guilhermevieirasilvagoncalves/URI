#include <bits/stdc++.h>

using namespace std;

int quant;

long int fib(int x){
    quant++;
    if(x <= 1){
        return x;
    }
    return fib(x-2) + fib(x-1);
}

int main(int argc, char const *argv[])
{
    int N;
    cin >> N;
    while ((N--))
    {
        int X;
        cin >> X;
        quant = 0;
        long int f = fib(X);
        printf("fib(%d) = %d calls = %d\n", X, quant - 1, f);
    }
    
}
