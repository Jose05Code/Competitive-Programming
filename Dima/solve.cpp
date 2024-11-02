// URL: https://dmoj.uclv.edu.cu/problem/dima	
    #include <iostream>
    using namespace std;

    int main() {
        int n, a, currentnumber = 0;
        unsigned long long res = 0; 

        cin >> n; // Read the value of n

        for (int i = 0; i < n; i++) {
            cin >> a; // Read the value of a
            res += abs(a - currentnumber); // Calculate the absolute difference between a and currentnumber and add it to res
            currentnumber = a; // Update currentnumber with the value of a
        }

        cout << res; // Print the final result
        return 0;
    }