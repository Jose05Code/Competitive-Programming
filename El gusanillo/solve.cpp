#include <iostream>

int main() {
    int r, d, p;
    std::cin >> r >> d >> p;

    int distancia_gusanillo = 0;
    int hoja_cercana=0;
    int resultado = 0;
    while(distancia_gusanillo <= r){
        if(distancia_gusanillo == hoja_cercana){
            resultado++;
        }
        distancia_gusanillo += d;
        while(distancia_gusanillo > hoja_cercana){
            hoja_cercana += p;
        }
    }
    std::cout << resultado << std::endl;
}