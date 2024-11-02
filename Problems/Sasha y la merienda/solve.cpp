#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x, y,cont=0,peso=0, aux=0; cin >> x >> y;
    vector <int> frutas(x);
    for(int i=0; x>i;i++)
    cin >> frutas[i];

    for(int i=0; x>i; i++){
        aux=max(aux, cont);
        cont = 0;
        peso = 0;
        if(aux>=x-i)
        break;
        for(int j=i; x>j; j++){
            if(peso==y)
            break;
            else if(peso+frutas[j]>y)
            continue;
            else{
            peso+=frutas[j];
            cont++;
            }
        }
    }

     cout << aux;

return 0;
}