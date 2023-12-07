#include <iostream>
#include <bitset> // para binary
#include <algorithm> // para count

using namespace std;
//para contar los unos en la representacion binaria de un numero
int binaryDigitSum(int n) {
    bitset<32> binary(n);
    return binary.count();
}

int main() {
    int n;
    cin >> n;
    // para sumar los unos de los numeros del 1 al n
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += binaryDigitSum(i);
    }
    // para imprimir el resultado
    cout << sum << endl;
    
    return 0;
}
