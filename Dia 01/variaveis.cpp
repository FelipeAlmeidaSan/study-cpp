#include <iostream>

int main()
{
    int x = 4;
    int y = 6;
    int sum = x + y;
    int multiple = x * y;

    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << sum << '\n';
    std::cout << multiple << '\n';

    // integer (whole number)
    int age = 20;
    int year = 2025;
    int days = 7;

    std::cout << age << '\n';

    // double (number including decimal)
    double price = 30.90;
    double gpe = 2.5;
    double temperature = 24.5;

    // single caracter
    char grade = 'A';
    char initial = 'F';
    char dollarSign = '$';

    // boolean (true or false)
    bool studant = true;
    bool sad = false;
    bool forSale = true;

    // string (objects that represents a sequence of text)
    std::string name = "Bro";
    std::string day = "Friday";
    std::string food = "pizza";
    std::string address = "123 Fake St.";

    std::cout << "Hello " << name << '\n';
    std::cout << "I am " << age << " years old." << '\n';

    return 0;
}