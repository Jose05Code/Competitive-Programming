#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N, count = 0, maximo = 0;
	cin >> N;

	vector <int> Personal(1000002, 0);

	for (int i = 0; i < N; i++) {
		int entrada, salida;
		cin >> entrada >> salida;

		Personal[entrada]++;
		Personal[salida + 1]--;
	}
	
			for (int j = 0; j < 1000002; j++) {
			count += Personal[j];
			if (maximo < count)
				maximo = count;
		}

	cout << maximo;

}