#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int Busqueda(vector<vector<int>>& Mapa, int& R, int& C, int& x_size, int& y_size) {
	stack<pair<int, int>> cordenadas;
	cordenadas.push(make_pair(R, C));
	int cont = 0;
	while (!cordenadas.empty()) {
		pair<int,int> x = cordenadas.top();
		cordenadas.pop();
		if (Mapa[x.first][x.second]) {
			Mapa[x.first][x.second] = 0;

			cont++;

			if (x.first - 1 >= 0 && Mapa[x.first - 1][x.second])
					cordenadas.push(make_pair(x.first - 1, x.second));

			if (x.first + 1 < x_size&& Mapa[x.first + 1][x.second])
					cordenadas.push(make_pair(x.first + 1, x.second));

			if (x.second - 1 >= 0 && Mapa[x.first][x.second - 1])
					cordenadas.push(make_pair(x.first, x.second - 1));

			if (x.second + 1 < y_size&& Mapa[x.first][x.second + 1])
					cordenadas.push(make_pair(x.first, x.second + 1));
		}
	}

	return cont;
}

int main()
{
	int N, M, K, cont = -1;
	cin >> N >> M >> K;
	vector<vector<int>> Mapa(N, vector<int>(M, 0));
	while (K--) {
		int R, C;
		cin >> R >> C;
		Mapa[R - 1][C - 1] = 1;
	}
	
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (Mapa[i][j]) {
				cont = max(cont,Busqueda(Mapa, i, j, N, M));
			}
		}
	}

	cout << cont;
}