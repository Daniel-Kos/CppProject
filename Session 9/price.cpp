#include <iostream>

int main()
{
    double price;
    std::cout << "Введите цену: ";
    std::cin >> price;
    int kopecks = static_cast<int>(price * 100 + 0.5);
    std::cout << "Рублей: " << kopecks / 100 << std::endl;
    std::cout << "Копеек: " << kopecks % 100 << std::endl;
    return 0;
}
