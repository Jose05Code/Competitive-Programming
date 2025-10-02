#include <iostream>
    using namespace std ;

    bool primos[1000000];

    void criva(){
        for(int i=0; 1000000>=i; i++)
        primos[i]=true;
        primos[0]=primos[1]=false;
        for(int i=2; 1000000>=i; i++)
        if(primos[i])
        for(int j=i*2; 1000000>=j; j+=i)
        primos[j]=false;
    }


    int main () {
    int x, cont1, cont2; cin >> x;
    int y[x];

    criva();

    for(int i=0; x>i; i++){
    cin >> y[i];
    if(primos[y[i]])
    cout << y[i] << " " << y[i] << "\n";
    else{
    cont1=cont2=y[i];
    for(int i=0; 1000000>i; i++){
        if(!primos[cont1])
        cont1--;
        if(!primos[cont2])
        cont2++;
        if(primos[cont1] && primos[cont2])
        break;    
    }
    cout << cont1 << " " << cont2 << "\n";
    }
    }
}