#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int first, second, third;
	cin >> first >> second >> third;

	if (third == first + second) {
		cout << first << "+" << second << "=" << third;
		return 0;
	}

	if (third == first - second) {
		cout << first << "-" << second << "=" << third;
		return 0;
	}
	if (third == first * second) {
		cout << first << "*" << second << "=" << third;
		return 0;
	}
	if (third == first / second) {
		cout << first << "/" << second << "=" << third;
		return 0;
	}

	if (first == second + third) {
		cout << first << "=" << second << "+" << third;
		return 0;
	}

	if (first == second - third) {
		cout << first << "=" << second << "-" << third;
		return 0;
	}
	if (first == second * third) {
		cout << first << "=" << second << "*" << third;
		return 0;
	}
	if (first == second / third) {
		cout << first << "=" << second << "/" << third;
		return 0;
	}
	else {
		cout << first << "=" << second << "=" << third;
		return 0;
	}
}