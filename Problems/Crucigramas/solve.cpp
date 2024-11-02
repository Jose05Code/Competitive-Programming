#include <iostream>
#include <vector>

using namespace std;

struct Position {
	int N, M;

	Position(int _N, int _M) : N(_N), M(_M) {}

	void Mostrar() const {
		cout << N << " " << M << "\n";
	}
};

int main() {
	int N, M;
	cin >> N >> M;

	vector<vector<char>> tabla(N, vector<char>(M));
	vector<Position> Answer;

	for (int i = 0; i < N; ++i)
		for (int j = 0; j < M; ++j)
			cin >> tabla[i][j];

	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < M; ++j) {
			if (tabla[i][j] == '.') {
				// Horizontal clues
				if ((j == 0 || tabla[i][j - 1] == '#') && j + 2 < M && tabla[i][j + 1] == '.' && tabla[i][j + 2] == '.') {
					Answer.emplace_back(i + 1, j + 1);
					continue;
				}

				// Vertical clues
				if ((i == 0 || tabla[i - 1][j] == '#') && i + 2 < N && tabla[i + 1][j] == '.' && tabla[i + 2][j] == '.') {
					Answer.emplace_back(i + 1, j + 1);
					continue;
				}
			}
		}
	}

	cout << Answer.size() << "\n";
	for (const Position& x : Answer)
		x.Mostrar();
}