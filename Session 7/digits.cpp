#include <iostream>

int main() {
    int num;
    std::cout << "Enter a two-digit number: ";
    std::cin >> num;

    int tens = num / 10;
    int units = num % 10;

    std::cout << "Digits: " << tens << " and " << units << "\n";

    return 0;
}