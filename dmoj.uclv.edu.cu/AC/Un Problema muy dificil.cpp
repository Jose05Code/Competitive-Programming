#include <iostream>

int main() {
    int rep;
    std::cin >> rep;

    for (int i = 0; i < rep; i++) {
        int a, b, c, d;
        std::cin >> a>> b>> c >> d;

        int multiplicacion1 = a * b;
        int multiplicacion2 = c * d;

        int resultado = multiplicacion1 > multiplicacion2 ? multiplicacion1 : multiplicacion2;

        std::cout << resultado << std::endl;
    }

    return 0;
}
