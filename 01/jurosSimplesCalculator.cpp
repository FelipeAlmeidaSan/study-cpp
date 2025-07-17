#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    double C; // Capital inicial
    double t; // Tempo
    double i; // Taxa

    cout << "Digite o valor do capital: ";
    cin >> C;

    cout << "Digite quanto tempo levará para pagar: ";
    cin >> t;

    cout << "Digite a taxa de juros: ";
    cin >> i;

    // Fórmula para calcular o juros simples
    double juros = C * (i / 100) * t;

    cout << "O valor a juros simples é igaul à: " << juros << '\n';

    double total = C + juros;
    cout << "Valor total a pagar: R$" << total << '\n';

    return 0;
}