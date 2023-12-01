#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int x,y,z;
    cin >> x >> y >> z;
    int roundedResult = static_cast<int>(ceil(sqrt(x*x+z*z)*y));

    cout << roundedResult << endl;

    return 0;
}
