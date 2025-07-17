// Hypotenuse calculator - c++
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, hypotenuse;

    cout << "=== Calculadore de Hipotenusa ===" << endl;

    // Entrada de catetos
    cout << "Digite o valor do primeiro cateto (a): ";
    cin >> a;

    cout << "Digitte o valor do segundo cateto (b): ";
    cin >> b;

    // Cálculo da hipotenuse
    hypotenuse = sqrt(pow(a, 2) + pow(b, 2));

    // Saída do resultado
    cout << "A hipotenusa é: " << hypotenuse << endl;

    return 0;
}
