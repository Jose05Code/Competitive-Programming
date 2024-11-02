#include <bits/stdc++.h>
using namespace std;
// Jose Miguel Frade IPVCE MH7 Artemisa
//================macros=====================
// Maximo
#define RED %1000000007
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
unsigned long long int fib[mx][mx];

unsigned long long int P(int a, int b)
{
    if (a == 0 or b == 0)
        return 1;

    if (fib[a][b] != 0)
        return fib[a][b];

    fib[a][b]= (P(a - 1, b) + P(a, b - 1) + P(a - 1, b - 1))RED;
    return fib[a][b];
}

int main()
{
    fast
    int rep;
    cin >> rep;
    int a, b;
    while (rep--)
    {
        cin >> a >> b;
        cout << P(a, b) << sl;
    }

    return 0;
}