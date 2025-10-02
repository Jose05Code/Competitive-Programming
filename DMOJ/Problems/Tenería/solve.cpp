#include <bits/stdc++.h>
using namespace std;
bool s;
int main(){
    int n, m, aux; cin >> n >> m;
    vector <int> pieles(n);
    for(int i=0; n>i; i++)
        cin >> pieles[i];

    for(int i=0; m>i; i++){
        cin >> aux;
        if(find(pieles.begin(), pieles.end(), aux)==pieles.end()){
        s=true;
        break;
        }
        else
        pieles.erase(find(pieles.begin(), pieles.end(), aux));
    }

    if(!s)
    cout << "Yes";
    else
    cout << "No";


}