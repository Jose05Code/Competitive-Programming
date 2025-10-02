#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    int maximo=0 , cont = 0 , sum= 0;
    int ini, fin;
    cin >> n >> k;
    vector <int> estudiantes(k + 2, 0);
    for (int i = 0; i < n; i++) {
        cin >> ini >> fin;
        estudiantes[ini]++;
        estudiantes[fin+1]--;
    }

    for (int i = 1; i <= k; i++) {
        sum += estudiantes[i];
        if (sum == maximo)
            cont++;

        if (sum > maximo) {
            maximo = sum;
            cont = 1;
        }
    }
    
    cout << cont;
}