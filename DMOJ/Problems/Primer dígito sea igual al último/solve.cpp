#include <bits/stdc++.h>
using namespace std;
int main(){
    
    unsigned long long x, y; cin >> x >> y;
    unsigned long long int cont;
    string a = to_string(x); string b = to_string(y);



    if(x<10 && y>10)
    cont= 10-x + y/10-1;
    else if(y<10){
    cont = (y-x)+1;
    goto xds;
    } else
    cont=y/10-x/10;



    if(a[0]<a[a.size()-1])
        cont--;

    if(b[0]<=b[b.size()-1])
        cont++;
    xds:
    cout << cont;
}