#include <cstdio>
#include <vector>
#include <algorithm>
//-------------------------MACROS GENERALES----------------------
typedef long long ll; 
typedef unsigned long long ull;
//typedef pair <int, int> pi;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define P push
#define INS insert
#define ORD(a) sort(a.begin(), a.end())
#define FOR(i,a,b) for (int i=a; i<b; i++)
#define SQ(a) a*a
//--------------------------MACROS DE CSTDIO-----------------------
#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define pf(n) printf("%d\n", n)
#define sfu(n) scanf("%llu", &n) 
#define pfu(n) printf("%llu\n", n)
//-----------------------------------------------------------------

ll MCD(ll a, ll b){
    if(b==0) return a;
    return MCD(b, a%b);
}

ll mcm(ll a, ll b){
    return a*(b/MCD(a,b));
}

int main(){
    int num;
    ull aux, aux1;
    sf(num);
    sfu(aux);

    FOR(i,0,num-1){
      sfu(aux1);
      aux=mcm(aux,aux1);
}
    pfu(aux);
}