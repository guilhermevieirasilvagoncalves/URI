#include <iostream>

using namespace std;

void fastscan(long int &number)
{
    //variable to indicate sign of input number
    bool negative = false;
    register int c;
  
    number = 0;
  
    // extract current character from buffer
    c = getchar();
    if (c=='-')
    {
        // number is negative
        negative = true;
  
        // extract the next character from the buffer
        c = getchar();
    }
  
    // Keep on extracting characters if they are integers
    // i.e ASCII Value lies from '0'(48) to '9' (57)
    for (; (c>47 && c<58); c=getchar())
        number = number *10 + c - 48;
  
    // if scanned input has a negative sign, negate the
    // value of the input number
    if (negative)
        number *= -1;
}

int main(int argc, char const *argv[])
{
    int v[] = {1,7,9,3};
    long int T;
    fastscan(T);
    while (T--)
    {
        long int N;
        fastscan(N);
        printf("%d\n",v[N%4]);
    }
    
}
