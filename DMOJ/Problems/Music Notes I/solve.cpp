#include <bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int x, y, j; cin >> x >> y;
vector <int> cancion;
for(int i=0; x>i; i++){
cin >> j;
for(int k=0; k<j;k++){
cancion.push_back(i+1);
}
}
for(int i=0; y>i; i++){
cin >> j;
cout << cancion[j] << "\n";
}
}