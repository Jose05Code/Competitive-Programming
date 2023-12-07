// URL: https://dmoj.uclv.edu.cu/problem/bellotas
#include <iostream>
#include <vector>

int main() {
    int rep;
    std::cin >> rep; // Read the number of elements

    std::vector<int> arreglo(rep); // Create a vector to store the elements
    for (int i = 0; i < rep; i++) {
        std::cin >> arreglo[i]; // Read each element and store it in the vector
    }

    int resultado = 0; // Initialize the result variable
    for (int i = 0; i < rep; i++) {
        if (arreglo[i] > 10) { // Check if the element is greater than 10
            resultado += arreglo[i] - 10; // Add the difference to the result
        }
    }

    std::cout << resultado << std::endl; // Print the result

    return 0;
}
