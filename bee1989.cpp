#include <bits/stdc++.h>

long long int soma(int i, int N, long long int capitulos[], int M){
    if(N <= 1){
        return capitulos[i] * M;
    }
    return capitulos[i] * M * N + soma(i+1, N-1,capitulos,M);
}

using namespace std;

int main(int argc, char const *argv[])
{
    long long int N,M;
    while (cin >> N >> M)
    {
        if (N == -1 and M == -1)
        {
            return 0;
        }
        long long int capitulos[N];
        for (int i = 0; i < N; i++)
        {
            cin >> capitulos[i];
        }

        cout << soma(0, N, capitulos, M) << endl;
        
        
    }
    
}
