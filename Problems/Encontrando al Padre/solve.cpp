#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int N;
    while (cin >> N) {
        bitset<33> binario(N);
        int bits_count = 0;

        for (int i = 0; i < 32; i++) {
            if (binario[i] && !binario[i + 1]) {
                binario[i] = 0;
                binario[i + 1] = 1;
                break;
            }
            else if (binario[i]) {
                binario[i] = 0;
                bits_count++;
            }
        }

        for (int i = 0; bits_count > 0 && i < 32; i++) {
            if (!binario[i]) {
                binario[i] = 1;
                bits_count--;
            }
        }

        unsigned long number = binario.to_ulong();
        cout << number << "\n";
    }
}