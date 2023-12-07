#include <iostream>
#include <numeric>
using namespace std;

// This function checks if a number (represented as a string) is divisible by 3
// It does this by summing the digits of the number and checking if the sum is divisible by 3
bool isDivisibleBy3(const string& x){
    int sum = accumulate(x.begin(), x.end(), 0, [](int sum, char c) { return sum + (c - '0'); });
    return sum % 3 == 0;
}

// This function checks if a number (represented as a string) is even
// It does this by checking if the last digit of the number is divisible by 2
bool isEven(const string& x){
    return (x.back() - '0') % 2 == 0;
}

// This function checks if a number (represented as a string) is divisible by 3 and even
// It does this by calling the isDivisibleBy3 and isEven functions
void checkDivisibility(const string& x){
    if(isDivisibleBy3(x) && isEven(x)){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

// This is the main function
// It reads a number of test cases, then for each test case, reads a number and checks if it is divisible by 3 and even
int main() {
    int rep;
    cin >> rep;
    while(rep--){
        string input;
        cin >> input;
        checkDivisibility(input);
    }

    return 0;
}