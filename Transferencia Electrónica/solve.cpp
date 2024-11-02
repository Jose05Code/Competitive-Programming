#include <bits/stdc++.h>
using namespace std;
//Jose Miguel Frade IPVCE MH7 Artemisa
//================macros=====================
//Maximo
#define MAX 100
#define MAXINT 99999999
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
#define vvii vector<vector<pair<float,float>>>
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
vvii grafos(MAX);
vector <float> D(MAX,MAXINT);
void Dijkstra(float x){
    set <pair<float,float>> Q;
    D[x]=0;
    Q.IN(pair<float,float>(0,x));
    while (!Q.empty())
    {
        pair<float,float> top = *Q.begin();
        Q.erase(Q.begin());
        float v = top.S;
        for(auto it = grafos[v].begin(); grafos[v].end()!=it; it++){
            float v2 = it->first;
            float costo = it->second;
            if(D[v2]>D[v]+costo){
                if(D[v2]!=MAXINT)
                Q.erase(Q.find(pair<float,float>(D[v2],v2)));

                D[v2] = D[v]+costo;
                Q.IN(pair<float,float>(D[v2],v2));
            }
        }
    }
    


}

int main(){
    float x,y,c,d,e;
    float id,de,hasta,aux;
    map <float,pair<float,pair<float,float>>> cables;
    float peso;
    cin >> x >> y >> c >> d >> e;
    for(float i=0;y>i;i++){
        cin >> id >> de >> hasta >> peso;
        cables.IN(make_pair(id, make_pair(de, make_pair(hasta,peso))));
    }
    for(float i=0; c>i; i++){
        cin >> aux;
        cables.erase(aux);
    }

    for(auto i = cables.begin(); i!= cables.end(); i++){
    grafos[i->second.F].PB(pair<float,float>(i->second.S.F,i->second.S.S));
    grafos[i->second.S.F].PB(pair<float,float>(i->second.F,i->second.S.S));
    }


    Dijkstra(d);
    cout  << setprecision(2) << fixed <<D[e];

}