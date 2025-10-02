#include <iostream>
#include <string>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K; // N: Número de dígitos, K: Número de dígitos a remover

    string Num; // Número a operar
    cin >> Num;

    // La longitud deseada del número final es N - K
    int digits_to_keep = N - K;
    string result = "";

    for (int i = 0; i < N; ++i) {
        // Mientras el resultado no esté vacío y podamos eliminar más dígitos
        // y el último dígito en el resultado sea menor que el dígito actual
        // y aún podamos alcanzar la longitud deseada del resultado
        while (!result.empty() && K > 0 && result.back() < Num[i] && result.length() + (N - i - 1) >= digits_to_keep) {
            result.pop_back();
            --K;
        }
        result.push_back(Num[i]);
    }

    // Si aún queda algún dígito para eliminar, lo hacemos desde el final
    while (K > 0) {
        result.pop_back();
        --K;
    }

    // Imprimir el resultado final
    cout << result << endl;

    return 0;
}