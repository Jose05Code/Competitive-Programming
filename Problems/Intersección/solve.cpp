#include <bits/stdc++.h>
using namespace std;



int main(){
    int cont=0;
    set <char> pal;
    set <char> pal1;
    string x, y; cin >> x >> y;
    for(int i=0; x.size()>i; i++)
    pal.insert(x[i]);

    for(int i=0; y.size()>i; i++)
    pal1.insert(y[i]);

    for(auto it=pal.begin(); it!=pal.end(); it++)
    cont+=min(count(x.begin(), x.end(), *it), count(y.begin(), y.end(), *it));

    cout << cont;
}