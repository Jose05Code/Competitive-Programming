#include <bits/stdc++.h>
using namespace std;
bitset<50>primos;

void iniciar_criba (unsigned long long int x) {
    primos.set();
    primos [0]= primos [1]= false ;
        for ( unsigned long long int i = 2; i <= x/2 ; i ++) 
            if ( primos [ i ]) 
             for ( unsigned long long int j = i*2 ;j <= x ; j = j + i ) 
                primos [ j ]= false ;
}

int main(){
    int y; cin >> y;
    for (int i = 0; i < y; i++){
     unsigned long long int x, prim=1; cin >> x;
    iniciar_criba(x);
    for (int i = 0; i <= x; i++)
        if (primos[i]==true)
            prim *= i;
    
    cout << prim << "\n";
    }
}