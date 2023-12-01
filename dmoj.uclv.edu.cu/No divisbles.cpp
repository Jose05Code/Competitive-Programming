#include <iostream>

int main() {
    int input;
    std::cin >> input;
    std::cout << input-(input/2+input/3+input/5-input/15-input/6-input/10+input/30) << std::endl;
    return 0;
}
