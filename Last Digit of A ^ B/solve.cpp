#include <iostream>
#include <math.h>
using namespace std;
#define MOD_X % 10
#define MOD 10

int bin_pow(int x, int y) {
	int res = 1;
	while (y > 0) {
		if (y & 1)
			res = res * x MOD_X;
		x = x * x MOD_X;
		y >>= 1;
	}
	return res MOD_X;
}

int main() {
	int x;
	cin >> x;
	while (x--) {
		int a, b;
		cin >> a >> b;
		cout << bin_pow(a, b) << "\n";
	}
}