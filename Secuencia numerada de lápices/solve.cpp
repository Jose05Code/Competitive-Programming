#include <iostream>
using namespace std;

typedef unsigned long long ull;
const int MOD = 100000007;

struct Matrix {
    ull mat[2][2];

    Matrix operator*(const Matrix& other) const {
        Matrix result;
        result.mat[0][0] = (mat[0][0] * other.mat[0][0] + mat[0][1] * other.mat[1][0]) % MOD;
        result.mat[0][1] = (mat[0][0] * other.mat[0][1] + mat[0][1] * other.mat[1][1]) % MOD;
        result.mat[1][0] = (mat[1][0] * other.mat[0][0] + mat[1][1] * other.mat[1][0]) % MOD;
        result.mat[1][1] = (mat[1][0] * other.mat[0][1] + mat[1][1] * other.mat[1][1]) % MOD;
        return result;
    }
};

Matrix matrix_pow(Matrix base, int exp) {
    Matrix result = { {{1, 0}, {0, 1}} }; // Matriz identidad
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = result * base;
        }
        base = base * base;
        exp /= 2;
    }
    return result;
}

ull fib_mod(int n) {
    if (n == 0) return 1;
    if (n == 1) return 1;

    Matrix base = { {{1, 1}, {1, 0}} };
    Matrix result = matrix_pow(base, n - 1);

    return result.mat[0][0];
}

int main() {
    int x, y;
    cin >> x;
    while (x--) {
        cin >> y;
        cout << fib_mod(y+1) << " ";
    }
}