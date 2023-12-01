#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

vector<bool> sieveOfEratosthenes(int n) {
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }

    return isPrime;
}

int countPrimes(vector<int>& arr, int a, int b, const vector<bool>& isPrime) {
    int count = 0;
    for (int i = a - 1; i < b; i++) {
        if (isPrime[arr[i]]) {
            count++;
        }
    }
    return count;
}

int findLargestNonPrime(vector<int>& arr, int a, int b, const vector<bool>& isPrime) {
    int largestNonPrime = -1;
    for (int i = a - 1; i < b; i++) {
        if (!isPrime[arr[i]] && arr[i] > largestNonPrime) {
            largestNonPrime = arr[i];
        }
    }
    return largestNonPrime;
}

int main() {
    int N, Q;
    cin >> N >> Q;

    vector<int> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    vector<bool> isPrime = sieveOfEratosthenes(*max_element(arr.begin(), arr.end()));

    while (Q--) {
        int operation, a, b;
        cin >> operation >> a >> b;

        if (operation == 1) {
            arr[a - 1] = b;
        } else if (operation == 2) {
            cout << countPrimes(arr, a, b, isPrime) << endl;
        } else if (operation == 3) {
            int largestNonPrime = findLargestNonPrime(arr, a, b, isPrime);
            if (largestNonPrime == -1) {
                cout << "NO ANSWER" << endl;
            } else {
                cout << largestNonPrime << endl;
            }
        }
    }

    return 0;
}