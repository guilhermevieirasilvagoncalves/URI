#include <bits/stdc++.h>

using namespace std;

void scan(int &number){
    bool negative = false;
    register int c;
 
    number = 0;
 
    c = getchar();
    if (c=='-')
    {
        negative = true;
 
        c = getchar();
    }

    for (; (c>47 && c<58); c=getchar())
        number = number *10 + c - 48;
    
    if (negative)
        number *= -1;
}

void display(vector<string> h, int n) {
    for (int i = 0; i < n; i++){
      printf("%d",h[i]);
    }
    printf("\n");
}

int main() {
  int nc, n, temp, max;
  scan(nc);
  while(nc){
    nc--;
    vector<string> h(211, "");
    scan(n);
    max = 19;
    for(int j = 0; j < n; j++){
      scan(temp);
      if (temp > max) {
        max = temp;
      }
      h[temp-20].append( to_string(temp) );
      h[temp-20].append( " " );
    }
    h[max-20].pop_back();
    display(h, 211);
  }
  
}
