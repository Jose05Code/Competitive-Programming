#include <cstdio>
#include <vector>
#include <string>
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
#define REV(a) reverse(a.begin(), a.end())
#define FOR(i,a,b) for (int i=a; i<b; i++)
#define SQ(a) a*a
//--------------------------MACROS DE CSTDIO-----------------------
#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define pf(n) printf("%d\n", n)
#define sfu(n) scanf("%llu", &n) 
#define pfu(n) printf("%llu\n", n)
//-----------------------------------------------------------------

std::vector<bool>primos(10e5, 1);

void criva(){
    primos[0]=primos[1]=0;
    for(int i=2;i<=10e5;i++)
        if(primos[i])
            for(int j=i*2;j<=10e5;j+=i)
                primos[j]=0;
}

int virar_numero(int x){
    std::string y= std::to_string(x);
    REV(y);
    return std::stoi(y);

}


int main(){
    criva();
    int x, y, sum=0;
    sff(x,y);
    
    if(x>y)
    std::swap(x,y);

    FOR(i,x,y+1){
    if(primos[i])
        if(primos[virar_numero(i)])
            sum++;
    }

    pf(sum);


}