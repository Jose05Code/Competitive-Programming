#include <bits/stdc++.h>
using namespace std;
// Jose Miguel Frade IPVCE MH7 Artemisa
//================macros=====================
// Maximo
#define mx 10e7
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
#define Fr front()
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
bool cas[8][8];

void comp(int a, int b)
{ //? Simulacion de movimientos
    cas[a][b] = true;

    if (a <= 6 and b <= 7)
        comp(a + 2, b + 1);

    if (a <= 7 and b <= 6)
    {
        comp(a + 1, b + 2);
    }

    if (a >= 2 and b <= 7)
        comp(a - 2, b + 1);

    if (a >= 1, b <= 6)
        comp(a - 1, b + 2);
}

int main()
{
    fast int a, b, c, d;
    cin >> a >> b >> c >> d;
    comp(a, b);
    if (cas[c][d])
        cout << "yes";
    else
        cout << "no";
}