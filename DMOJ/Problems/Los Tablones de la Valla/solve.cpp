#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int N, K;
    cin >> N >> K;
    unsigned long long acumulador = 0;
    int aux;
    vector <unsigned long long> val(N);
    for (int i = 0; N > i; i++) {
        cin >> aux;
        acumulador += aux;
        val[i] = acumulador;
    }
    unsigned long long minimo = 1000000000000;
    unsigned long long index;
    for (int i = K - 1; i < N; i++) {
        if (i == K - 1) {
            minimo = val[i];
            index = 1;
        }
        else if (minimo > val[i] - val[i - K]) {
            minimo = val[i] - val[i - K];
            index = i - K + 2;
        }

    }

    cout << index;
}