#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Vaca {
    int p; // precio del regalo
    int s; // costo de envío
    int costoSinCupon; // p + s
    int costoConCupon; // (p / 2) + s
};

int main() {
    int n, presupuesto;
    cin >> n >> presupuesto;

    vector<Vaca> vacas(n);
    for (int i = 0; i < n; ++i) {
        cin >> vacas[i].p >> vacas[i].s;
        vacas[i].costoSinCupon = vacas[i].p + vacas[i].s;
        vacas[i].costoConCupon = (vacas[i].p / 2) + vacas[i].s;
    }

    sort(vacas.begin(), vacas.end(), [](const Vaca& a, const Vaca& b) {
        return a.costoSinCupon < b.costoSinCupon;
        });

    int maxVacas = 0;

    for (int i = 0; i < n; i++) {
        int presupuestoRestante = presupuesto - vacas[i].costoConCupon;

        if (presupuestoRestante < 0) continue; 

        int cuentaVacas = 1;

        for (int j = 0; j < n; j++) {
            if (j == i) continue; 

            if (presupuestoRestante >= vacas[j].costoSinCupon) {
                presupuestoRestante -= vacas[j].costoSinCupon;
                cuentaVacas++;
            }
            else {
                break;
            }
        }

        maxVacas = max(maxVacas, cuentaVacas);
    }

    cout << maxVacas << '\n';
}