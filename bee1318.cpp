#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n,m;
    while (cin >> n >> m)
    {
        if(n == 0 && m == 0){
            break;
        }
        map<int,int> hist;
        for (int i = 0; i < m; i++)
        {
            int a;
            cin >> a;
            hist[a]++;
        }
        int cont = 0;
        for (int i = 0; i < hist.size(); i++)
        {  
            if(hist[i] > 1){
                cont++;
            }
        }
        cout << cont << endl;
        }
}
