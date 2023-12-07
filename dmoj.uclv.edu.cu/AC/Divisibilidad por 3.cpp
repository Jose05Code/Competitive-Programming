
#include <iostream>
using namespace std;

// struct for the input numbers
struct Numbers {
    int digit1;
    int digit2;
    int digit3;
    // sort the numbers in ascending order
    void sortNumbers() {
        if (digit1 > digit2) {
            swap(digit1, digit2);
        }
        if (digit2 > digit3) {
            swap(digit2, digit3);
        }
        if (digit1 > digit2) {
            swap(digit1, digit2);
        }
    }
};

// check if a number is divisible by 3
bool isDivisibleBy3(int number) {
    return number % 3 == 0;
}

// return the smallest number that is divisible by 3 strcuting the input numbers
int numberResult(const Numbers& input) {
    if(isDivisibleBy3(input.digit1)){
        return input.digit1;
    } else
    if(isDivisibleBy3(input.digit2)){
        return input.digit2;
    } else
    if(isDivisibleBy3(input.digit3)){
        return input.digit3;
    } else 
        if(isDivisibleBy3(input.digit1 + input.digit1)){
        return input.digit1 + input.digit1*10;
    } else
        if(isDivisibleBy3(input.digit2 + input.digit1)){
        return input.digit2 + input.digit1*10;
    } else
        if(isDivisibleBy3(input.digit3 + input.digit1)){
        return input.digit3 + input.digit1*10;
    } else
        if(isDivisibleBy3(input.digit3 + input.digit2)){
        return input.digit3 + input.digit2*10;
        } 
    return input.digit1 + input.digit1*10 + input.digit1*100;
}

// main function
int main() {
    // input the numbers
    Numbers input;
    cin >> input.digit1 >> input.digit2 >> input.digit3;

    // sort the numbers
    input.sortNumbers()
    ;
    // print the result
    cout << numberResult(input);

    return 0;
}
