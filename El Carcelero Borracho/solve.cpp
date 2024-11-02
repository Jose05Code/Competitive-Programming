#include <bits/stdc++.h>
using namespace std;
//Jose Miguel Frade IPVCE MH7 Artemisa
//================macros=====================
//Maximo
#define mx 10000000
//Optimizacion
#define fast     \
    cin.tie(0);  \
    cout.tie(0); \
    ios_base::sync_with_stdio(0);
//Constantes
#define pi 3.141592
//salto de linea
#define sl "\n"
//varibales
#define ull unsigned long long
#define ll long long
#define ii pair<int, int>
#define vi vector<int>
#define vii vector<ii>
#define qi queue<int>
#define sei set<int>
//Comandos vector
#define PB push_back
#define ins(a,b) insert(make_pair(a,b))
//Comandos queue
#define P push
#define FR front()
#define PP pop()
//Comandos para set
#define IN insert
#define C count
//Comandos para string
#define str to_string
//Comandos Pair
#define F first
#define S second
//===========================================
int main(){
    fast
    bitset<101>carcel;
    int round;
    cin >> round;
    int celdas;
    for(int z=0; round>z; z++){
    cin >> celdas;
    for(int i=0; celdas>=i; i++){
        for(int j=i; celdas>j; j+=i+1)
            carcel[j]=!carcel[j];
    }
    cout << carcel.count() << sl;
    carcel.reset();
    }
}