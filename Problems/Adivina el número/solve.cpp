#include <iostream>
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c;

	for (int i = 999; i >= 100; i--) {
		if (!(i % b)) {
			b = i;
			break;
		}
	}

	for (int i = 1000; i <= 9999; i++) {
		if (!(i % c)) {
			c = i;
			break;
		}
	}

	cout << a + b + c;
}