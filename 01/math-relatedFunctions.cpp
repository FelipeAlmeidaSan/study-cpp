#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x = 9.0;

    cout << "Raiz quadrada de " << x << ": " << sqrt(x) << '\n';
    cout << "2 elevado à 3: " << pow(2, 3) << '\n';
    cout << "Valor absoluto de -7.5: " << fabs(-7.5) << '\n';
    cout << "Arredondar 4.6: " << round(4.6) << '\n';
    cout << "Arredondar para baixo 4.6: " << floor(4.6) << '\n';
    cout << "Arredondar para cima 4.1: " << ceil(4.1) << '\n';
    cout << "Resto da divisão 7.5 % 2.0: " << fmod(7.5, 2.0) << '\n';

    cout << "Seno de PI/2: " << sin(3.14159 / 2) << '\n';
    cout << "Logaritmo natural de e: " << log(2.71828) << '\n';
    cout << "Logaritmo base 10 de 1000: " << log10(1000) << '\n';

    return 0;
}
