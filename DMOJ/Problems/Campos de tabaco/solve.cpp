#include <iostream>
#include <vector>
using namespace std;

int main() {
	int r, c, q;
	cin >> r >> c >> q;
	int acumulador = 0;
	int aux;
	vector<vector<int>> tabla(r, vector<int>(c));
	for (int i = 0; i < r; i++) {
		acumulador = 0;
		for (int j = 0; j < c; j++) {
			cin >> aux;
			if (aux > 0) {
				acumulador += aux;
				tabla[i][j] = acumulador;
			}
			else
			{
				tabla[i][j] = acumulador;
			}
		}
	}

	while (q--) {
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		unsigned long long cont = 0;
		if (y1 - 2 >= 0) {
			for (int i = x1 - 1; i < x2; i++) {
				cont += tabla[i][y2 - 1] - tabla[i][y1 - 2];
			}
		}
		else {
			for (int i = x1 - 1; i < x2; i++) {
				cont += tabla[i][y2 - 1];
			}
		}

		cout << cont << "\n";
	}


}