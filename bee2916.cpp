#include <bits/stdc++.h>

using namespace std;


int main(int argc, char const *argv[])
{
    int N, K;
    while (cin >> N >> K)
    {
        vector <unsigned long long int> arr(N);
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end(), greater<unsigned long long int>());
        
        unsigned long long int soma = 0;
        for (int j = 0; j < K; j++)
        {
            soma += arr[j];
        }

        soma = soma % ((1000000000)+7);

        
        cout << soma << endl;
        
        arr.clear();

        
    }
    
}
