#include <iostream>
#include <vector> // Para usar vectores
using namespace std;

int main() {
    int repeat, average=0;
    cin >> repeat;
    vector<int> Bales(repeat);

    // Recibir los valores de los Bales
    for (int i = 0; i < repeat; i++) {
        cin >> Bales[i]; 
        average += Bales[i]; // Sumar los valores de los Bales
    }
    average /= repeat; // Calcular el promedio

    // Variable para almacenar el resultado
    int result = 0;

    // Recorrer el vector
    for (int i = 0; i < repeat; i++) {
        // Si el valor del Bale es menor que el promedio
        if (Bales[i] > average) {
            //Sumar la diferencia entre el promedio y el valor del Bale
            result += Bales[i] - average;
        }
    }

    // Imprimir el resultado
    cout << result << endl;

    return 0;
}
