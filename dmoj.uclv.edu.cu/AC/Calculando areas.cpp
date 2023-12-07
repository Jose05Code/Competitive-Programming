// URL: https://dmoj.uclv.edu.cu/problem/calculandoareas
#include <iostream>
#include <cmath>
#include <iomanip> // std::setprecision

int main() {
    int repeticiones;
    std::cin >> repeticiones;
    while (repeticiones--)
    {
        double diameter;
        std::cin >> diameter;
        double area_circulo = M_PI * pow( diameter / 2, 2); // Calculate the area of a circle
        double area_cuadrado = diameter * diameter; // Calculate the area of a square
        std::cout << std::fixed << std::setprecision(2) << area_cuadrado-area_circulo << std::endl; // Print the difference between the areas
    }

    return 0;
}
