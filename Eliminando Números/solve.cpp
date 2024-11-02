#include <bits/stdc++.h>
using namespace std;
//Jose Miguel Frade IPVCE MH7 Artemisa
//================macros=====================
//Maximo
#define MAX 10000000
#define MAXINT
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
vector <ull> busqueda;
bitset <MAX> primos;
void criba(){
    primos.set();
    primos[0]=primos[1]=0;
    for(ull i=2; i<MAX/2; i++)
        if(primos[i]){
            busqueda.PB(i);
            for(ull j=i*2; j<MAX; j+=i)
            primos[j]=false;
        }
}

ull binary_search(ull a)
{
    ull min = 0, max = busqueda.size() - 1, flag;
    while (max >= min)
    {
        flag = min + (max - min) / 2;
        if (busqueda[flag] == a)
            return flag;
        else if (busqueda[flag] > a)
            max = flag - 1;
        else
            min = flag + 1;
    }
    return min;
}

int main(){
    criba();
        for(ull i=0; 10>i; i++){
        ull x; cin >> x;
        cout << binary_search(x+1) << sl;
    }

}