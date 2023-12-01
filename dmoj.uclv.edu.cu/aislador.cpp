#include <iostream>
using namespace std;

int main() {
    int rep;
    cin >> rep;
    unsigned long long res=0;
    int mayor=0,menor=9999999,aux;
    for (int i = 0; i < rep; i++){
        cin >> aux;
        res+=aux;
        mayor=max(mayor,aux);
        menor=min(menor,aux);
    }
    cout << res+mayor-menor;
    return 0;
}
