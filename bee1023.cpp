#include <bits/stdc++.h>

using namespace std;

struct casas{
    int moradores;
    int consumo;
    int media;
};

bool compare(const casas &a, const casas &b)
{
    return a.media < b.media;
}


int main(int argc, char const *argv[])
{
    int N;
    int count = 1;
    while (cin >> N)
    {
        if(!N){
            return 0;
        }
        vector<casas> v(N);
        map<int, int> hist;
        map<int, int>::iterator itr;
        double moradoresT = 0, consumoT = 0; 
        for (int i = 0; i < N; i++)
        {
            cin >> v[i].moradores >> v[i].consumo;
            v[i].media = floor(v[i].consumo / v[i].moradores);
            hist[v[i].media]+=v[i].moradores;
            moradoresT += v[i].moradores;
            consumoT += v[i].consumo;
        }
        
        sort(v.begin(),v.end(),compare);

        printf("Cidade# %d:\n",count);

        for (itr = hist.begin(); itr != hist.end(); ++itr)
        {   
            cout << itr->second << "-" << itr->first << " ";
        }
        cout << endl;

        double f = consumoT / moradoresT;
        //cout << (double)f << endl;
        float value = floor(f * 100) / 100;
        //cout << "Consumo medio: " << (double)floor(x * 100) / 100 << " m3." << endl;
        printf("Consumo medio: %.2f m3.\n", value);
        cout << endl;
        count++;
    }
    
}
