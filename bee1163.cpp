#include <bits/stdc++.h>
#define pi 3.14159
#define g 9.80665

using namespace std;

int main(int argc, char const *argv[])
{
    double h;
    while(cin >> h){
        int p1, p2;
        cin >> p1 >> p2;
        int n;
        cin >> n;
        while (n--)
        {
            double alpha, v0;
            cin >> alpha >> v0;
            double t = (v0*sin(alpha * pi/180) + sqrt(pow(v0 * sin(alpha * pi/180), 2) + 2*g*h)) / g;
            //cout << t << endl;
            double x = (v0*cos(alpha * pi/180)) * t;
            //cout << x << endl;
            if(x >= p1 && x <= p2){
                printf("%.5lf -> DUCK\n", x);
            }
            else{
                printf("%.5lf -> NUCK\n", x);
            }
        }
    }
    
    
}
