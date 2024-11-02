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
vi grafo[101];
vi visited(101, -1);

void dfs(int nodo)
{
    int u, v;
    qi q;
    q.P(nodo);
    visited[nodo] = 0;
    while (!q.empty())
    {
        u = q.FR;
        q.PP;
        for (int i = 0; grafo[u].size() > i; i++)
        {
            v = grafo[u][i];
            if (visited[v] == -1)
            {
                visited[v] = visited[u] + 1;
                q.P(v);
            }
        }
    }
}

int main()
{
    fast
        string digito;
    cin >> digito;
    for (int i = 0; digito.size() > i + 1; i++)
    {
        grafo[i].PB(i + 1);
        grafo[i + 1].PB(i);
        for (int j = i; digito.size() > j; j++)
        {
            if (digito[i] == digito[j])
                grafo[i].PB(j);
        }
    }

    dfs(0);
    cout << visited[digito.size() - 1];
}