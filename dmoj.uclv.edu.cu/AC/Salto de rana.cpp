#include <iostream>
#include <unordered_map> // para cache
using namespace std;

unordered_map<int, unsigned long long> cache; // cache[n] = fibonacci(n)

unsigned long long fibonacci(int n) { // O(n)
    if (n <= 1) {
        return n;
    }

    if (cache.find(n) != cache.end()) { // para evitar recalcular
        return cache[n];
    }

    unsigned long long result = (fibonacci(n - 1) + fibonacci(n - 2))%1000000007;
    cache[n] = result;
    return result; // fibonacci(n)
}

int main() {
    int repeticiones;
    cin >> repeticiones;
    while(repeticiones--){
    // para leer el numero
    int n;
    cin >> n;

    // para imprimir el resultado
    cout << fibonacci(n+1) << endl;
    }

    return 0;
}
