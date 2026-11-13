#include <iostream>
#include <string>

int main()
{
    std::string name;
    int birthYear;

    std::cout << "What is your name? ";
    std::cin >> name;

    std::cout << "What year were you born? ";
    std::cin >> birthYear;

    std::cout << "Hello, " << name << "!" << std::endl;
    std::cout << "You are about " << 2026 - birthYear << " years old." << std::endl;

    return 0;
}
