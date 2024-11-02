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

int main(){
    vvii G(MAX);
    vi D(MAX,MAXINT);
    int x,y;
    cin >> x >> y;
    for(int i=0; y>i;i++){
        int de,hasta,peso;
        cin >> de >> hasta >> peso;
        G[de].PB(ii(hasta,peso));
        G[hasta].PB(ii(de,peso));
    }
    set <ii> Q;
    D[1]=0;
    Q.IN(ii(0,1));
    while (!Q.empty())
    {
        ii top = *Q.begin();
        Q.erase(Q.begin());
        int nodo = top.S;
        for (auto it = G[nodo].begin(); it!=G[nodo].end(); it++)
        {
            int v2 = it -> first;
            int cost = it -> second;
            if(D[v2]>D[nodo]+cost){
                if(D[v2]!=MAXINT)
                Q.erase(Q.find(ii(D[v2],v2)));
            D[v2]=D[nodo]+cost;
            Q.IN(ii(D[v2],v2));
            }
        }
    }

    cout << D[x];

}