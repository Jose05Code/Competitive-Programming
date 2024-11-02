#include <iostream>
using namespace std;

int main() {
    int a, b;
    
    while (true) {
        cin >> a >> b;
        if (a == 0 && b == 0) {
            break;
        }
        cout << a*2-b << endl;

}
    return 0;
}