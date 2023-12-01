#include <iostream>
#include <vector> // To use vectors
#include <algorithm> // To use sort

using namespace std;

int main() {
    int rep,res=0; // rep: Number of elements in the vector, res: Result of the problem
    cin >> rep; // Read the number of elements in the vector
    
    vector<int> vec(rep); // Create a vector of size rep

    for(int i = 0; i < rep; i++) { // Read the elements of the vector
        cin >> vec[i];
        res+=vec[i]; // Add the elements to the result
    }
    
    sort(vec.begin(), vec.end()); // Sort the vector
    
    int x=0,aux=rep-1; // x: Variable to iterate from the beginning of the vector, aux: Variable to iterate from the end of the vector
    while(x <rep/2){ // Iterate until the middle of the vector
        res+=vec[aux]-vec[x]; // Add the difference between the largest and smallest elements to the result
        x++; // 
        aux--;
    }

    cout << res << endl; // Print the result

    return 0;
}
