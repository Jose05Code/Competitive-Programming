#include <bits/stdc++.h>
using namespace std;
// Jose Miguel Frade IPVCE MH7 Artemisa
//================macros=====================
// Maximo
#define mx 1001
// Optimizacion
#define fast     \
    cin.tie(0);  \
    cout.tie(0); \
    ios_base::sync_with_stdio(0);
// Constantes
#define pi 3.141592
// salto de linea
#define sl "\n"
// varibales
#define ull unsigned long long
#define ll long long
#define ii pair<int, int>
#define vi vector<int>
#define vii vector<ii>
#define qi queue<int>
#define sei set<int>
// Comandos vector
#define PB push_back
#define ins(a, b) insert(make_pair(a, b))
// Comandos queue
#define P push
#define FR front()
#define PP pop()
// Comandos para set
#define IN insert
#define C count
// Comandos para string
#define str to_string
// Comandos Pair
#define F first
#define S second
//===========================================
int peso[mx], valor[mx];
int dp[mx][mx];
int mochila(int i, int libre)
{
    if (libre < 0)
        return -100000000;
    if (i == 0)
        return 0;
    if (dp[i][libre] != -1)
        return dp[i][libre];
    int opcion1 = mochila(i - 1, libre);
    int opcion2 = valor[i] + mochila(i - 1, libre - peso[i]);
    return (dp[i][libre] = max(opcion1, opcion2));
}

int main()
{
    fast
    int x,cont=0;
    cin >> x;
    while(x--){   
    int N, CAPACIDAD;
    cin >> N >> CAPACIDAD;
    for(int i=1; N>=i; i++)
    cin >> peso[i] >> valor[i];

    memset(dp, -1, sizeof(dp));
    int aux = mochila(N,CAPACIDAD);
    cont += aux;
    }
    cout << cont << endl;
}