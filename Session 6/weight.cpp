#include <iostream>

int main() {
    double pounds;
    std::cout << "Вес в фунтах: ";
    std::cin >> pounds;
    std::cout << "Вес в кг: " << pounds * 0.453592 << "\n";

    double inches;
    std::cout << "Рост в дюймах: ";
    std::cin >> inches;
    std::cout << "Рост в см: " << inches * 2.54 << "\n";

    return 0;
}