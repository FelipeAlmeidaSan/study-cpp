#include <iostream>
using namespace std;

void addition()
{
    int a = 34, b = 234;
    cout << "\nSoma (addition): " << a + b << '\n';
}

void subtraction()
{
    int a = 302, b = 235;
    cout << "Subtração: " << a - b << '\n';
}

void multiplication()
{
    int a = 32, b = 6;
    cout << "Multiplicação: " << a * b << '\n';
}

void division()
{
    int a = 20, b = 2;
    int rest1 = a / b;
    cout << "Divisão inteira: " << rest1 << '\n';

    double x = 20.0, y = 2.0;
    double rest2 = x / y;
    cout << "Divisão com ponto flutuante: " << rest2 << '\n';
}

void mdl()
{
    int a = 16, b = 4;
    int result = a % b;
    cout << "Resto da divisão: " << result << '\n';
}

void increment()
{
    int a = 10;
    a++;
    cout << "Valor após incremento: " << a << '\n';
}

void decrement()
{
    int a = 10;
    a--;
    cout << "Valor após decremento: " << a << '\n';
}

int main()
{
    int sum = 35 + 72;
    int diff = 384 - 323;

    cout << "Soma direta: " << sum << '\n';
    cout << "Diferença direta: " << diff << '\n';

    cout << "=========================\n";
    addition();
    subtraction();
    multiplication();
    division();
    mdl();
    increment();
    decrement();

    return 0;
}
