#include <iostream>

int main()
{
    int x = 10;
    int y = 4;

    double z1 = x / y;         // Resultado: 2.0 inteira acontece antes
    double z2 = (double)x / y; // Resultado: 2.5 conversão evita perda de precisão

    std::cout << z1 << '\n';
    std::cout << z2 << '\n';
}
