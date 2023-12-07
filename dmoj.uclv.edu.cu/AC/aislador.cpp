#include <iostream>
#include <vector> // To use vectors
#include <algorithm> // To use sort

using namespace std;

// Function to read the elements of the vector
void readVector(vector<int>& vec) {
    int rep; // Number of elements in the vector
    cin >> rep; // Read the number of elements in the vector
    
    vec.resize(rep); // Resize the vector to accommodate the elements

    for(int i = 0; i < rep; i++) { // Read the elements of the vector
        cin >> vec[i];
    }
}

// Function to calculate the result
int calculateResult(vector<int>& vec) {
    int res = 0; // Result of the problem
    
    sort(vec.begin(), vec.end()); // Sort the vector
    
    int x = 0, aux = vec.size() - 1; // x: Variable to iterate from the beginning of the vector, aux: Variable to iterate from the end of the vector
    while(x < vec.size() / 2) { // Iterate until the middle of the vector
        res += vec[aux] - vec[x]; // Add the difference between the largest and smallest elements to the result
        x++; 
        aux--;
    }
    
    for(int i = 0; i < vec.size(); i++) { // Iterate through the vector to calculate the sum of all elements
        res += vec[i];
    }
    
    return res;
}

int main() {
    vector<int> vec; // Create a vector to store the elements
    
    readVector(vec); // Read the elements of the vector
    
    int res = calculateResult(vec); // Calculate the result
    
    cout << res << endl; // Print the result

    return 0;
}