#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int z, V;
	cin >> z >> V;
	vector<char> vocales(V);

	vector<char> consonantes = {
		'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm',
		'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'z'
	};

	for (int i = 0; i < V; i++) {
		cin >> vocales[i];
	}

	sort(vocales.begin(), vocales.end());

	if (z == 5) 
		for (int i = 0; i < 20; i++) 
			for (int j = 0; j < V; j++) 
				for (int k = 0; k < 20; k++)
					for (int l = 0; l < V; l++) 
						for (int p = 0; p < 20; p++) {
							string res = "";
							res += consonantes[i];
							res += vocales[j];
							res += consonantes[k];
							res += vocales[l];
							res += consonantes[p];
							cout << res << "\n";
						}
	if(z == 4)
		for (int i = 0; i < 20; i++)
			for (int j = 0; j < V; j++)
				for (int k = 0; k < 20; k++)
					for (int l = 0; l < V; l++){
							string res = "";
							res += consonantes[i];
							res += vocales[j];
							res += consonantes[k];
							res += vocales[l];
							cout << res << "\n";
						}
						
	if(z == 3)
		for (int i = 0; i < 20; i++)
			for (int j = 0; j < V; j++)
				for (int k = 0; k < 20; k++){
						string res = "";
						res += consonantes[i];
						res += vocales[j];
						res += consonantes[k];
						cout << res << "\n";
					}

	if (z == 2) 
		for (int i = 0; i < 20; i++)
			for (int j = 0; j < V; j++){
					string res = "";
					res += consonantes[i];
					res += vocales[j];
					cout << res << "\n";
				}

	}