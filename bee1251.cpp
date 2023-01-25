#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int>& a,
         pair<int, int>& b)
{
    if(a.second == b.second){
        return a.first > b.first;
    }
    return a.second < b.second;
}
  
void sort(map<int, int>& M)
{
    vector<pair<int, int> > A;
  
    for (auto& it : M) {
        A.push_back(it);
    }

    sort(A.begin(), A.end(), cmp);
  
    for (auto& it : A) {
  
        cout << it.first << ' '
             << it.second << endl;
    }
    //cout << endl;
}

int main(int argc, char const *argv[])
{
    string txt;
    bool b = false;
    while (getline(cin, txt))
    {   
        if(b){
            cout << endl;
        }
        b = true;
        
        map<int, int> hist;
        map<int, int>::iterator itr;
        for (int i = 0; i < txt.size(); i++)
        {
            hist[txt[i]]++;            
        }

        sort(hist);
        
        //cout << endl;
    }
    
}
