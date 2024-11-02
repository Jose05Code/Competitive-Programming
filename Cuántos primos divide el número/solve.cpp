#include <iostream>
using namespace std ;

bool primos[1000];

void criva(){
    for(int i=0; 1000>=i; i++)
    primos[i]=true;
    primos[0]=primos[1]=false;
    for(int i=2; 1000>=i; i++)
    if(primos[i])
    for(int j=i*2; 1000>=j; j+=i)
    primos[j]=false;
}


int main () {
    int x, cont=0; cin >> x;
    int y[x];

    criva();

    for(int i=0; x>i; i++){
    cin >> y[i];
    for(int j=0; y[i]>=j; j++)
        if(primos[j] && y[i]%j==0)
        cont++;

    cout << cont << "\n";
    cont=0;
    }

}