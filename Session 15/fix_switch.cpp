#include <iostream>

// Errors:
// 1. Line A: Missing break after case 2 (fallthrough).
// 2. Line B: Duplicate case 2, should be case 4.

int main()
{
    int code = 2;
    switch (code)
    {
    case 1:
        std::cout << "Эспрессо" << std::endl;
        break;
    case 2:
        std::cout << "Латте" << std::endl;
        break; // Fixed A
    case 3:
        std::cout << "Какао" << std::endl;
        break;
    case 4: // Fixed B
        std::cout << "Мокко" << std::endl;
        break;
    }
    return 0;
}