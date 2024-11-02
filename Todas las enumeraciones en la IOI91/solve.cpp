#include <iostream>
#include <vector>
using namespace std;

int enume(vector<vector<int>>& tabla, int ix, int iy, int iteraciones = 1); // comenzamos con 1 ya que la posición inicial cuenta

int main()
{
    vector <vector<int>> tabla(5, vector<int>(5, -1));
    int ix, iy;
    cin >> ix >> iy;
    int counter = enume(tabla, ix-1, iy-1);
    cout << counter;
}

int enume(vector<vector<int>>& tabla, int ix, int iy, int iteraciones)
{
    // Si hemos llenado las 25 casillas (0 a 24), entonces es una ruta válida
    if (iteraciones == 25)
        return 1;

    int count = 0;
    tabla[ix][iy] = iteraciones;  // Marcar la posición como visitada

    // primera regla: mover 3 pasos en la dirección horizontal
    if (ix + 3 < 5 && tabla[ix + 3][iy] == -1) {
        count += enume(tabla, ix + 3, iy, iteraciones + 1);
    }

    if (ix - 3 >= 0 && tabla[ix - 3][iy] == -1) {
        count += enume(tabla, ix - 3, iy, iteraciones + 1);
    }

    // segunda regla: mover 3 pasos en la dirección vertical
    if (iy + 3 < 5 && tabla[ix][iy + 3] == -1) {
        count += enume(tabla, ix, iy + 3, iteraciones + 1);
    }

    if (iy - 3 >= 0 && tabla[ix][iy - 3] == -1) {
        count += enume(tabla, ix, iy - 3, iteraciones + 1);
    }

    // tercera regla: mover en diagonal (2, 2) o (-2, -2)
    if (ix + 2 < 5) {
        if (iy + 2 < 5 && tabla[ix + 2][iy + 2] == -1) {
            count += enume(tabla, ix + 2, iy + 2, iteraciones + 1);
        }
        if (iy - 2 >= 0 && tabla[ix + 2][iy - 2] == -1) {
            count += enume(tabla, ix + 2, iy - 2, iteraciones + 1);
        }
    }

    if (ix - 2 >= 0) {
        if (iy + 2 < 5 && tabla[ix - 2][iy + 2] == -1) {
            count += enume(tabla, ix - 2, iy + 2, iteraciones + 1);
        }
        if (iy - 2 >= 0 && tabla[ix - 2][iy - 2] == -1) {
            count += enume(tabla, ix - 2, iy - 2, iteraciones + 1);
        }
    }

    tabla[ix][iy] = -1;  // Desmarcar la posición para otras rutas

    return count;
}