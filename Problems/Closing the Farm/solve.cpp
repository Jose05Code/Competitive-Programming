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
int n, q;
vector<int> grafo[3001];
bool visitados[3001];
bool bfs(int nodo, set<int> list)
{
    int u, v;
    visitados[0] = 0;
    queue<int> cola;
    cola.P(nodo);
    visitados[nodo] = 1;
    while (!cola.empty())
    {
        u = cola.front();
        cola.pop();
        for (int i = 0; grafo[u].size() > i; i++)
        {
            v = grafo[u][i];
            if (visitados[v] == 0)
            {
                visitados[v] = 1;
                cola.P(v);
            }
        }
    }
    for (auto i = list.begin(); i != list.end(); i++)
        if (visitados[*i] == 0)
            return 0;

    return 1;
}

int main()
{
    cin >> n >> q;
    set<int> list;

    int de, hasta;

    while (q--)
    {
        cin >> de >> hasta;
        grafo[de].PB(hasta);
        grafo[hasta].PB(de);
    }

    for (int i = 1; n + 1 > i; i++)
        list.insert(i);

    for (int i = 0; n > i; i++)
    {

        memset(visitados, 0, sizeof(visitados));
        int ini = *list.begin();
        if (bfs(ini, list))
            cout << "YES\n";
        else
            cout << "NO\n";

        int y;
        cin >> y;
        list.erase(y);

        for (int i = 0; grafo[y].size() > i; i++)
            grafo[y][i] = 0;
    }
}