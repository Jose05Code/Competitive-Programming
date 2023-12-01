#include <iostream>

int main() {
    unsigned long long rep;
    std::cin >> rep;

    for (unsigned long long i = 0; i < rep; i++) {
        unsigned long long input;
        std::cin >> input;
        input++;
        unsigned long long sumatoria = input * (input + 1) / 2;
        std::cout << sumatoria << std::endl;
    }

    return 0;
}
