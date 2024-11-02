#include <bits/stdc++.h>
using namespace std;
int conocer(int x){
    set <int> conocidos;
    int y[x], cont=0, comp=0, aux, marca=1;
    for(int i=0; x>i; i++)
    cin >> y[i];

    for(int j=0; x>j; j++){
        if(cont > comp){
        comp=cont;
        marca=j;
        }
        cont=0;
        aux=y[j];
        conocidos.clear();
        conocidos.insert(j);
    for(int i=0; x>i; i++){
    if(!count(conocidos.begin(), conocidos.end(), aux-1)){
    conocidos.insert(aux-1);
    aux=y[aux-1];
    cont++;
    }else
    break;
        }
    }
    return marca;
}

int main(){
int x; cin >> x;
cout << conocer(x);
}