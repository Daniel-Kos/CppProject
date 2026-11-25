#include <iostream>

int main()
{
    int level = 2;
    bool premium = true;

    std::cout << (premium || level >= 3) << std::endl;   // 1
    std::cout << (!premium && level > 5) << std::endl;   // 0

    if (level >= 3)      { std::cout << "верхний ярус" << std::endl; }
    else if (level >= 1) { std::cout << "нижний ярус"  << std::endl; }

    switch (level)
    {
    case 1:
        std::cout << "один" << std::endl;
        break;
    case 2:
        std::cout << "два" << std::endl;
        break; // Added break (was missing — caused fallthrough)
    case 3:
        std::cout << "три" << std::endl;
        break;
    default:
        std::cout << "другое" << std::endl;
    }

    std::cout << (level >= 2 ? "доступ открыт" : "доступ закрыт") << std::endl;
    return 0;
}