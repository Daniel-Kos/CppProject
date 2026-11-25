#include <iostream>

int main()
{
    int t;
    std::cout << "Введите температуру: ";
    std::cin >> t;

    if (t <= 0)       { std::cout << "Состояние: лёд"   << std::endl; }
    else if (t < 100) { std::cout << "Состояние: вода"  << std::endl; }
    else              { std::cout << "Состояние: пар"   << std::endl; }

    if (t == 0)   std::cout << "Точка замерзания" << std::endl;
    if (t == 100) std::cout << "Точка кипения"    << std::endl;

    std::cout << (t >= 20 && t <= 25 ? "комфортно" : "некомфортно") << std::endl;
    return 0;
}