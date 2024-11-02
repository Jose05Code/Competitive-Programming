#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int x;
	cin >> x;
	while (x--) {
		int a, b;
		cin >> a >> b;
		int cont = 0;
		if (a >= b + 2) {
			cout << cont << "\n";
			continue;
		}
		if (a == b) {
			cout << b+1 << "\n";
			continue;
		}
		cout << b << "\n";

		
	}
}