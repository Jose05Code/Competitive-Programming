#include <bits/stdc++.h>
using namespace std;
int main(){
    int x, y, cont=0; cin >> x >> y;
    string g[x*2];
    for(int i=0; x*2>i; i++)
    cin >> g[i];
    vector <bool> po(y, true);

for(int k=0; y>k; k++)
    for(int i=0; x>i; i++)
        for(int j=x; x*2>j; j++)
            if(g[i][k]==g[j][k])
                po[k]=false;

for(int i=0; y>i; i++)
    if(po[i])
    cont++;
    
    cout << cont;

    
}