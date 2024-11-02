#include <iostream>

using namespace std;

int main() {
	string n;
	cin >> n;
	int count = 0;

	if (n[0] > n[1] and n[1] > n[2])
		cout << "Descendente";
	else if (n[0] < n[1] and n[1] < n[2])
		cout << "Ascendente";
	else if (n[0] == n[1] and n[1] == n[2])
		cout << "Equilibrado";
	else
		cout << "Alterno";
}