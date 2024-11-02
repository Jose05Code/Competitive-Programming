#include <bits/stdc++.h>
using namespace std;
int main(){
     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int x, cont=1, aux; cin >> x;
vector <int> num(x);
for(int i=0; x>i; i++)
    cin >> num[i];
    aux=num[0];
for(int i=1; x>i; i++)
    if(aux>=num[i]){
    cont++;
    aux=num[i];
    }
    cout << cont;
}