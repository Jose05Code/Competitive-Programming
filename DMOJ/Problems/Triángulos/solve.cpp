#include <iostream>
#include <set>
#include <algorithm>
#include <tuple>
using namespace std;

int main() {
    int P;
    cin >> P;
    int a;
    int Contador = 0;
    for (int c = 1; c <= P / 2; c++) { // C
        for (int b = 1; b <= c; b++) { // B
            a = P - c - b;

            if (a + b > c && a != 0 && a <= b)
                Contador++;
        }
    }

    cout << Contador;

    return 0;
}