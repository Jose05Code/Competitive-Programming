// URL: https://dmoj.uclv.edu.cu/problem/dominoes2
#include <iostream>

int main() {
    unsigned long long rep;
    std::cin >> rep; // Read the number of test cases

    for (unsigned long long i = 0; i < rep; i++) {
        unsigned long long input;
        std::cin >> input; // Read the input number
        input++; // Increment the input number by 1
        unsigned long long sumatoria = input * (input + 1) / 2; // Calculate the sum of numbers from 1 to input
        std::cout << sumatoria << std::endl; // Print the sum
    }

    return 0;
}
