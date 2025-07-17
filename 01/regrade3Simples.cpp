#include <iostream>
using namespace std;

int main()
{
    double a, b, c, x;

    cout << "=== Regra de 3 Simples ===\n";
    cout << "Se a -> b\n";
    cout << "   c -> x (qual o valor de x?)\n";

    cout << "Digite o valor de a: ";
    cin >> a;

    cout << "Digite o valor de b: ";
    cin >> b;

    cout << "Digite o valor de c: ";
    cin >> c;

    // Fórmula para calcular regra de 3 Simples
    x = (b * c) / a;

    cout << "O valor de x é: " << x << '\n';

    return 0;
}
