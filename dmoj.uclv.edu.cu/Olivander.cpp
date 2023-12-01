#include <iostream>
#include <vector> // Para usar vectores
#include <algorithm> // Para usar la función sort
using namespace std;
int main() {
    int repeat;
    cin >> repeat;
    vector<int> wands(repeat);
    vector<int> boxes(repeat);

    // Recibir los valores de los wands
    for (int i = 0; i < repeat; i++) {
        cin >> wands[i];
    }

    // Recibir los valores de los boxes
    for (int i = 0; i < repeat; i++) {
        cin >> boxes[i];
    }

    // Ordenar los vectores
    sort(wands.begin(), wands.end());
    sort(boxes.begin(), boxes.end());

    bool flag = true; // Para saber si es posible o no

    // Comparar los elementos de los vectores
    for (int i = 0; i < repeat; i++) {
        if (wands[i] > boxes[i]) {
            flag = false;
            break;
        }
    }

    // Resto del código...
    if (flag) {
        cout << "DA" << endl;
    } else {
        cout << "NE" << endl;
    }

    return 0;
}
