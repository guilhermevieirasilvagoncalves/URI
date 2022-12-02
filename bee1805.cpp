#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    long int a,b;
    cin >> a >> b;
    long long int resp = 0;
    for (int i = a; i <= b; i++)
    {
        resp += i;
    }

    cout << resp << endl;
    
}
