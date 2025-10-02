#include <iostream>
#include <math.h>
using namespace std;
#define MOD_X % 1234567891
#define MOD 1234567891

unsigned long long bin_pow(unsigned long long x, unsigned long long y) {
	x = x MOD_X;
	unsigned long long res = 1;
	while (y > 0) {
		if (y & 1)
			res = res * x MOD_X;

		x = x * x MOD_X;
		y >>= 1;
	}
	return res;
}

unsigned long long inverso_modular(unsigned long long x) { // Fermat's little theorem
	return bin_pow(x, MOD - 2) MOD_X;
}

int main() {
	unsigned long long n;
	unsigned long long ans = 0;
	cin >> n;
	for (unsigned long long i = 1; i <= n; i++) {
		ans = (ans + inverso_modular(n MOD_X * i MOD_X * i MOD_X)) MOD_X;
	}
	cout << ans MOD_X;
}