#include <iostream>
#include <vector>
using namespace std;

int Mayor_Suma_En_Un_Triangulo(vector<vector<int>>& Tabla, int N);

int main() {
    // Input
    int N;
    cin >> N;
    vector<vector<int>> Tabla(N, vector<int>(N, -1));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < i + 1; j++) {
            cin >> Tabla[i][j];
        }
    }

    cout << Mayor_Suma_En_Un_Triangulo(Tabla, N) << endl;
}

int Mayor_Suma_En_Un_Triangulo(vector<vector<int>>& Tabla, int N) {
    vector<vector<int>> dp = Tabla;

    for (int i = N - 2; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            dp[i][j] += max(dp[i + 1][j], dp[i + 1][j + 1]);
        }
    }
    return dp[0][0];
}