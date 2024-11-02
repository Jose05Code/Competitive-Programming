#include <iostream>

int bit_counter(int input) {
    int result = 1;
    while (input != 1) {
        result += input % 2;
        input /= 2;
    }
    return result;
}

int main() {
    int input;
    std::cin >> input;
    std::cout << bit_counter(input);
    return 0;
}