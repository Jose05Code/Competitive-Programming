#include <bits/stdc++.h>
using namespace std;
//Jose Miguel Frade IPVCE MH7 Artemisa
//================macros=====================
//Maximo
#define MAX 50001
#define MAXINT 1000000000
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
#define vvii vector<vector<ii>>
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
vvii G(MAX);
vi D(MAX, MAXINT);

void Dijkstra(int s)
{
    set<ii> Q;
    D[s] = 0;
    Q.IN(ii(0, s));
    while (!Q.empty())
    {
        ii top = *Q.begin();
        Q.erase(Q.begin());
        int v = top.second;
        vii ::const_iterator it;
        for (it = G[v].begin(); it != G[v].end(); it++)
        {
            int v2 = it -> first;
            int cost = it -> second;
            if (D[v2] > D[v] + cost)
            {
                if (D[v2] != 1000000000)
                {
                    Q.erase(Q.find(ii(D[v2], v2)));
                }
                D[v2] = D[v] + cost;
                Q.insert(ii(D[v2], v2));
            }
        }
    }
}

int main()
{
    fast
    int n,m,maximo=0,k;
    cin >> n >> m >> k;
    for (int i = 0; i < m; i++)
    {
        int a, b, p;
        cin >> a >> b >> p;
        G[a].push_back(ii(b, p));
        G[b].push_back(ii(a, p));
    }
    Dijkstra(k);

    for(int i=1;n>=i;i++)
    maximo=max(maximo,D[i]);

    cout << maximo*2;
    return 0;
}