#include <bits/stdc++.h>

using namespace std;

long long int fib(long long int n){
    if(n <= 1) return n;

    unsigned long long int a = 0;
    unsigned long long int b = 1;
    unsigned long long int c;

    for (unsigned long long i = 2; i <= n; i++)
    {
        c = (a + b) % 1000;
        a = b;
        b = c;
    }

    return c;
}


int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    while (n--)
    {
        string b;
        cin >> b;
        long long int num = 0;
        // for (int i = 0; i < b.size(); i++)
        // {
        //     num += (b.at(b.size() - 1 - i) == '1') << i;
        // }
        for (int i = 0; i < b.size(); i++)
        {
            num *= 2;
            num += (b.at(i) - '0');
            num = num % 1500;
        }
        
        //cout << num << endl;
        int fibonacci = fib(num);
        //cout << fibonacci << endl;
        string resp = to_string(fibonacci);
        if(resp.size() == 1){
            cout << "00" << resp <<  endl;
        }
        else if(resp.size() == 2){
            cout << "0" << resp << endl;
        }
        else{
            cout << resp << endl;
        }
        num = 0;

    }
    
}
