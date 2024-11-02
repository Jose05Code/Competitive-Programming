#include <cstdio>
#include <vector>
#include <algorithm>
//-------------------------MACROS GENERALES----------------------
typedef long long ll; 
typedef unsigned long long ull;
typedef std::vector<int> vi;
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
#define sf(n) scanf("%llu", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define pf(n) printf("%llu\n", n)
//-----------------------------------------------------------------

int main(){
    ull num,sum, tot;
    sf(num);
    vi list(num);
    
    FOR(i,0,num)
        scanf("%d", &list[i]);
    
    ORD(list);

    tot=(num*(num-1))/2;
    sum=1;

    FOR(i,0,num)
    if(list[i]==list[i+1]){
    sum++;
    }else{
    if(sum>1)
    tot-=(sum*(sum-1))/2;
    sum=1;
    }
   pf(tot);
}