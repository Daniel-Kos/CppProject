#include <iostream>

int main () {
    int a, b, c;
    std::cin >> a >> b >> c;

    // обрезает до целого
    std::cout << (a + b + c) / 3 << std::endl;    // целочисленное: 4

    // оставляет дробную часть
    std::cout << (a + b + c) / 3.0 << std::endl;  // дробное: 4.33333
}