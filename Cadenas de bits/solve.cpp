#include <iostream>
#include <cmath>
using namespace std;

#define MOD 1000000007

int bin_pow(int x, int y) {
    int res = 1;
    while (y > 0) {
        if (y & 1)
            res = (1LL * res * x) % MOD;
        x = (1LL * x * x) % MOD;
        y >>= 1;
    }
    return res % MOD;
}

int main() {
    int x;
    cin >> x;
    cout << bin_pow(2, x);
}