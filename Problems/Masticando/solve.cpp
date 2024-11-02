#include <iostream>
#include <vector>
#include <utility>
#include <stack>
using namespace std;

int dfs(int R, int C, vector<vector<char>>& Mapa, pair<int,int> bessy) {
	stack <pair<int,int>> Posicion;
	pair<int, int> actual;
	vector<vector<int>> Tiempo(R, vector<int>(C, 1000000001));
	Posicion.push(make_pair(0, 0));
	Tiempo[0][0] = 0;

	while (!Posicion.empty()) {
		actual = Posicion.top(); Posicion.pop();

		if (actual.first - 1 >= 0 && Mapa[actual.first - 1][actual.second] != '*') {
			if (Tiempo[actual.first - 1][actual.second] > Tiempo[actual.first][actual.second] + 1) {
				Tiempo[actual.first - 1][actual.second] = Tiempo[actual.first][actual.second] + 1;
				Posicion.push(make_pair(actual.first - 1, actual.second));
			}
		}
		if (actual.first + 1 < R && Mapa[actual.first + 1][actual.second] != '*') {
			if (Tiempo[actual.first + 1][actual.second] > Tiempo[actual.first][actual.second] + 1) {
				Tiempo[actual.first + 1][actual.second] = Tiempo[actual.first][actual.second] + 1;
				Posicion.push(make_pair(actual.first + 1, actual.second));
			}
		}
		if (actual.second - 1 >= 0 && Mapa[actual.first][actual.second - 1] != '*') {
			if (Tiempo[actual.first][actual.second - 1] > Tiempo[actual.first][actual.second] + 1) {
				Tiempo[actual.first][actual.second - 1] = Tiempo[actual.first][actual.second] + 1;
				Posicion.push(make_pair(actual.first, actual.second - 1));
			}
		}
		if (actual.second + 1 < C && Mapa[actual.first][actual.second + 1] != '*') {
			if (Tiempo[actual.first][actual.second + 1 ] > Tiempo[actual.first][actual.second] + 1) {
				Tiempo[actual.first][actual.second + 1] = Tiempo[actual.first][actual.second] + 1;
				Posicion.push(make_pair(actual.first, actual.second + 1));
			}
		}

	}

	return Tiempo[bessy.first][bessy.second];
}

int main() {
	int R, C;
	cin >> R >> C;
	pair<int, int> bessy;
	vector<vector<char>> Mapa(R, vector<char>(C));
	for (int i = 0; i < R; i++) 
		for (int j = 0; j < C; j++) {
			cin >> Mapa[i][j];
			if (Mapa[i][j] == 'C')
				bessy = make_pair(i, j);
		}

	cout << dfs(R, C, Mapa,bessy);
	
	
}