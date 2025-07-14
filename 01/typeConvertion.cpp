// Type Conversion é o processo de converter um tipo de dado para outro.
// Exemplo: converter um int para float, ou um double para int.

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
