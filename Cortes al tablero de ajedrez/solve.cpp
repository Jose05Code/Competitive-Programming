#include <cstdio>
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
#define REV(a) reverse(a.begin(), a.end())
#define FOR(i,a,b) for (int i=a; i<b; i++)
#define SQ(a) a*a
//--------------------------MACROS DE CSTDIO-----------------------
#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define pf(n) printf("%d\n", n)
#define sfu(n) scanf("%llu", &n) 
#define pfu(n) printf("%llu ", n)
//-----------------------------------------------------------------

int main(){
  float n;
  scanf("%f", &n);
  pf((int)((n/2+1)*(n/2+1)));
}