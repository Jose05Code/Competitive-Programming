#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

struct Punto
{
	int x, y, radio;

	double distancia(const Punto& otro) const {
		int dx = x - otro.x;
		int dy = y - otro.y;
		return sqrt(dx * dx + dy * dy);
	}

	void mostrar() const {
		cout << x << " " << y;
	}

	bool operator==(const Punto& otro) const {
		return (x == otro.x) && (y == otro.y) && (radio == otro.radio);
	}
	
	bool operator!=(const Punto& otro) const {
		return !(*this == otro);
	}
};

int main()
{
	int x;
	cin >> x;

	vector <pair<Punto, bool>> Puntos(x);

	for (int i = 0; i < x; i++)
	{
		cin >> Puntos[i].first.x >> Puntos[i].first.y >> Puntos[i].first.radio;
		Puntos[i].second = true;
	}

	int Posicion_0;

	for (int i = 0; i < x; i++) {
		if (Puntos[i].first.x == 0 && Puntos[i].first.y == 0) {
			Posicion_0 = i;
			break;
		}
	}
	int cont = x;
	while (cont - 1) {
		for (int i = 0; x > i; i++) {
			if (Puntos[i].second and Puntos[i].first != Puntos[Posicion_0].first)
				if (Puntos[Posicion_0].first.distancia(Puntos[i].first) == (Puntos[Posicion_0].first.radio + Puntos[i].first.radio)) {
					Puntos[Posicion_0].second = false;
					cont--;
					Posicion_0 = i;
					break;
				}
		}
	}

	Puntos[Posicion_0].first.mostrar();


}