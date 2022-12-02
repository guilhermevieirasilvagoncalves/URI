#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int A, D;
    while (cin >> A >> D)
    {
        if (!A && !D)
        {
            return 0;
        }
        
        vector<int> atk(A);
        vector<int> def(D);
        for (int i = 0; i < A; i++)
        {
            cin >> atk[i];
        }
        for (int j = 0; j < D; j++)
        {
            cin >> def[j];
        }

        sort(atk.begin(),atk.end());
        sort(def.begin(),def.end());

        if (atk[0] >= def[1])
        {
            cout << "N" << endl;
        }
        else if(atk[0] == def[0] && atk[0] == def[1]){
            cout << "N" << endl;
        }
        else{
            cout << "Y" << endl;
        }
        
        atk.clear();
        def.clear();

    }
    
    
}
