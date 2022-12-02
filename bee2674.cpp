#include <bits/stdc++.h>

using namespace std;

bool isprime(int n){
  int a = 2;
  while(a <= sqrt(n)){
    if(n % a < 1){
      return false;
    }
    a++;
  }
  return n > 1;
}

int main(int argc, char const *argv[])
{
    int N;
    while (cin >> N)
    {
        if(isprime(N)){
            string num = to_string(N);
            int count = 0;
            for (int i = 0; i < num.size(); i++)
            {
                int valor = (int) num[i] - 48;
                //cout << "num: " << valor << endl;
                if(isprime(valor)){
                    count++;
                }
            }
            //cout << count << endl;
            if(count == num.size()){
                cout << "Super" << endl;
            }
            else{
                cout << "Primo" << endl;
            }
        }
        else{
            cout << "Nada" << endl;
        }
    }
    
}
