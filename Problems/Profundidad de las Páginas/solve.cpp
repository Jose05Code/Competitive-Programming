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
vi grafo[51];
int visited[51];

void dfs(int nodo)
{
    int u, v;
    qi q;
    q.P(nodo);
    visited[nodo] = 1;
    while (!q.empty())
    {
        u = q.FR;
        q.PP;
        for (int i = 0; grafo[u].size() > i; i++)
        {
            v = grafo[u][i];
            if (visited[v] == -1)
            {
                q.P(v);
                visited[v] = visited[u] + 1;
            }
        }
    }
}

void clear()
{
    for (int i = 0; 51 > i; i++)
        grafo[i].clear();

    memset(visited,-1,sizeof(visited));
}

void input()
{
    int page, links, quest, aux;
    cin >> page >> links >> quest;
    ii direct;
    while (links--)
    {
        cin >> direct.F >> direct.S;
        grafo[direct.F].PB(direct.S);
    }
    dfs(1);
    while (quest--)
    {
        cin >> aux;
        cout << visited[aux] << sl;
    }
}

int main()
{
    fast int rep;
    cin >> rep;
    while (rep--)
    {
        clear();
        input();
    }
}