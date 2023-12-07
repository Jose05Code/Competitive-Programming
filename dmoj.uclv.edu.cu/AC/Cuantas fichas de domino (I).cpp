// URL: https://dmoj.uclv.edu.cu/problem/dominoes1
#include <iostream>

int main() {
    int rep;
    std::cin >> rep; // Read the number of test cases

    for (int i = 0; i < rep; i++) {
        int input;
        std::cin >> input; // Read the input number
        input++; // Increment the input number by 1
        int sumatoria = input * (input + 1) / 2; // Calculate the sum of numbers from 1 to input
        std::cout << sumatoria << std::endl; // Print the sum
    }

    return 0;
}
