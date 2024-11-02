#include <bits/stdc++.h>
using namespace std;
// Jose Miguel Frade IPVCE MH7 Artemisa
//================macros=====================
// Maximo
#define mx 100000000
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
#define Fr front()
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
//! el codigo se puede hacer por "segment descomposition" o por "Binary search"
bitset<100000000>sieve;
vi primes;
void sieve_eratosthenes()
{ //?para sacar los numeros primos
    sieve.set();
    sieve[0] = sieve[1] = false;
    for (int i = 2; mx/2 > i; i++)
        if (sieve[i])
        {
            primes.PB(i); //? para tener los primos en el vector de la busqueda
            for (int j = i + i; mx > j; j += i)
                sieve[j] = false;
        }
}

int binary_search(int a)
{
    int min = 0, max = primes.size() - 1, flag;
    while (max >= min)
    {
        flag = min + (max - min) / 2;
        if (primes[flag] == a)
            return flag;
        else if (primes[flag] > a)
            max = flag - 1;
        else
            min = flag + 1;
    }
    return min;
}

int main()
{
    fast
    sieve_eratosthenes();
    int rep, a, b;
    cin >> rep;
    for(int i=1; rep >= i; i++)
    {
        cin >> a >> b;
        cout << "Test Case #" << i <<": "<< binary_search(b+1)-binary_search(a) << "\n";
    }
}