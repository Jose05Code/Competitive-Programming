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
    int num, tot{0};
    sf(num);
    num++;
    while(num--){
      tot+=__builtin_popcount(num);
    }
    pf(tot);
    
   
}