#include <iostream>

// Errors:
// 1. Line A: => instead of >=.
// 2. Line B: Missing braces in else, so the last line always prints.

int main()
{
    int age = 15;
    if (age >= 18) // Fixed A
    {
        std::cout << "Вход разрешён" << std::endl;
    }
    else 
    {
        std::cout << "Вход запрещён" << std::endl;
        std::cout << "Приходите в 18+" << std::endl; // Fixed B
    }
    return 0;
}