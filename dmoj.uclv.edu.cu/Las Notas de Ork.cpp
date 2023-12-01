#include <iostream>
#include <unordered_map> // To use unordered_map

int main() {
    char input; // Variable to store the input
    std::cin >> input; // Read the input

    std::unordered_map<char, int> dictionary = { // Creating a dictionary
        {'A', 5},// Key: 'A', Value: 5
        {'B', 4},// Key: 'B', Value: 4
        {'C', 4},// Key: 'C', Value: 4
        {'D', 3},// Key: 'D', Value: 3
        {'E', 2} // Key: 'E', Value: 2
    };

    // Accessing the values
    std::cout << dictionary[input] << std::endl;

    return 0;
}
