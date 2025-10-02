#include <iostream>
#include <vector>
using namespace std;

int main() {
    int x, y, i;
    cin >> x >> y >> i;
    vector<vector<bool>> cuadrado(x, vector<bool>(y, 0));  // Inicializa con '.'
    long long cont = 0;

    while (i--) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        for (int i = x1; i <= x2; i++)
            for (int j = y1; j <= y2; j++) {
                if (!cuadrado[i - 1][j - 1]) {
                    cont++;
                    cuadrado[i - 1][j - 1] = true;
                }
            }
    }

    cout << cont;
}