#include <bits/stdc++.h>
using namespace std;
// Jose Miguel Frade IPVCE MH7 Artemisa
//================macros=====================
// Maximo
#define mx 10000000
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
bool pass = 0;
string operacion;
int cont;
void op(int a, int b, const string c = " ",int d=1)
{
    if (a == b)
    {
        pass = 1;
        operacion = c;
        cont = d;
    }
    else if (b > a && !pass)
    {
        string c1 = c;
        string c2 = c;
        c1 += str(a * 10 + 1) += " ";
        c2 += str(a * 2) += " ";
        op((a * 10) + 1, b, c1, d+1);
        op((a * 2), b, c2, d+1);
    }
}

int main()
{
    fast
    int x, y;
    cin >> x >> y;
    op(x, y);
    if (pass)
        cout << "YES\n" << cont << sl << x << operacion;
    else
        cout << "NO";
}