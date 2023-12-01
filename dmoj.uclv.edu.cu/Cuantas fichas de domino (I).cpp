#include <iostream>

int main() {
    int rep;
    std::cin >> rep;

    for (int i = 0; i < rep; i++) {
        int input;
        std::cin >> input;
        input++;
        int sumatoria = input * (input + 1) / 2;
        std::cout << sumatoria << std::endl;
    }

    return 0;
}
