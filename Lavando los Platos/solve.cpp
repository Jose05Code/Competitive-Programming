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
    int platos,person,time;
    cin >> platos;

    stack <int> sin_labar;
    stack <int> mojados;
    stack <int> listos;

    for(int i=platos; 0<i; i--)
    sin_labar.P(i);

    while(!sin_labar.empty() or !mojados.empty()){
        cin >> person >> time;
        if(person==1)
            for(int i=0; time>i; i++){
            mojados.P(sin_labar.top());
            sin_labar.PP;
            }
            else
            for(int i=0; time>i; i++){
            listos.P(mojados.top());
            mojados.PP;
            }
    }

    for(int i=0; platos>i; i++){
    cout << listos.top() << sl;
    listos.PP;
    }

}