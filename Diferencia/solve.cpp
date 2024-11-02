#include <iostream>
#include <cmath>
using namespace std;

pair<int, int> findClosestFactors(int n) {
    int a = static_cast<int>(sqrt(n));
    int b = a;

    while (a * b != n) {
        if (a * b < n) {
            ++b;
        }
        else {
            --a;
        }
    }

    return { a, b };
}

int main() {
    int n;
    cin >> n;
    pair<int, int> ClosesFactors = findClosestFactors(n);
    cout << ClosesFactors.first << " " << ClosesFactors.second;
}