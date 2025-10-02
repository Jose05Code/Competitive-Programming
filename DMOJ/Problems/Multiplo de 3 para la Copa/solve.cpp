#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
	string input;
	cin >> input;
	set <char> resto_1{ '1', '4', '7' };// numeros congruentes con 1 mod 3;
	set <char> resto_2{ '2','5','8' };// numeros congruentes con 2 mod 3;

	int resto = 0;
	for (unsigned long long i = 0; i < input.length(); i++) {
		resto = (resto + (input[i] - '0')%3)%3;
	}

	if (resto == 0) {
		cout << 0;
		return 0;
	}

	int cont = 0;
	if (resto == 1) {
		for (unsigned long long i = 0; i < input.length(); i++) {
			if (resto_1.count(input[i])) {
				if (input.length() <= 1) {
					cout << -1;
					return 0;
				}
				cout << 1;
				return 0;
			}
			if (resto_2.count(input[i]))
				cont++;
		}
		if (cont >= 2) {
			if (input.length() <= 2) {
				cout << -1;
				return 0;
			}
			cout << 2;
			return 0;
		}
		else {
			cout << -1;
			return 0;
		}


	}
	else {
		for (unsigned long long i = 0; i < input.length(); i++) {
			if (resto_2.count(input[i])) {
				if (input.length() <= 1) {
					cout << -1;
					return 0;
				}
				cout << 1;
				return 0;
			}
			if (resto_1.count(input[i]))
				cont++;
		}
		if (cont >= 2) {
			if (input.length() <= 2) {
				cout << -1;
				return 0;
			}
			cout << 2;
			return 0;
		}
		else {
			cout << -1;
			return 0;
		}
	}




}