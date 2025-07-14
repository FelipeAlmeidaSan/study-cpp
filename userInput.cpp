#include <iostream>

int main()
{
    std::string name;
    int idade;

    std::cout << "What's your name?";
    std::cin >> name;

    std::cout << "What's your age? ";
    std::cin >> idade;

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << idade << " years old";

    return 0;
}