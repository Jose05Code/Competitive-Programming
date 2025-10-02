#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int N;
	cin >> N;
	while (N--) {
		int Pi;
		cin >> Pi;
		string Ki;
		cin >> Ki;
		if (Ki.length() & 1) {
			cout << "illegal\n";
			continue;
		}
		int cont = 0;
		for (char i : Ki) {
			if (i == '>')
				cont++;
			else if (cont > 0)
				cont--;
			else {
				cont--;
				break;
			}
		}
		if (cont == 0)
			cout << "legal\n";
		else
			cout << "illegal\n";
	}
	
}