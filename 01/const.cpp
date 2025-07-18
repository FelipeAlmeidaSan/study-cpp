#include <iostream>

int main()
{

    // The const keyword specifies that a variable's value is constant
    // tells the compiler to prevent anything from modifyng it
    // (ready-only)

    double pi = 3.14159;
    double radius = 10;
    double circumference = 2 * pi * radius;

    std::cout << circumference << "cm";

    return 0;
}