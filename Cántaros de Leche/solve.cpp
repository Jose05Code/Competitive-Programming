#include <iostream>
using namespace std;

int main() {
    int X, Y, M;
    cin >> X >> Y >> M;
    int maximo = 0;

    for (int i = 0; i * X <= M; i++) {
        for (int j = 0; i * X + j * Y <= M; j++) {
            maximo = max(maximo, i * X + j * Y);
        }
    }

    cout << maximo;
}