#include <iostream>

int main() {
    int n, sumatoria;
    std::cin >> n;
    if(n < 0){
    n=abs(n);
    sumatoria = -1*(n*(n+1)/2-1);
    }
    else{
    sumatoria = n*(n+1)/2;
    }

    std::cout  << sumatoria << std::endl;

    return 0;
}
