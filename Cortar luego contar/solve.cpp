#include <iostream>
#include <set>

using namespace std;



int main() {
	int comparador = 0, solve = 0;
	set <char> Dist_1;
	int x;
	string word;
	cin >> x >> word;

	for (int i = 0; i < x; i++) {
		Dist_1.insert(word[i]);

		set <char>Dist_2;
		comparador = 0;
		for (int j = x - 1; j > i; j--) {
			if (Dist_1.count(word[j]) && !Dist_2.count(word[j])){
				Dist_2.insert(word[j]);
				comparador++;
			}
		}


		if (comparador > solve)
			solve = comparador;
	}

	cout << solve;


}