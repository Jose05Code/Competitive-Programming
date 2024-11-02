#include <bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int x, cont=0; cin >> x;
vector <int> aislamiento(x);
for(int i=0; x>i; i++)
cin >> aislamiento[i];

sort(aislamiento.begin(), aislamiento.end());

for(int i=0; x>i; i++)
cont+= aislamiento[i];

for(int i=0; x/2>i; i++)
cont+= aislamiento[(x-i-1)]-aislamiento[i];

cout << cont;

}