#include <iostream>

int main() {
    double c;
    std::cout << "Цельсий: ";
    std::cin >> c;
    double f = c * 9.0 / 5.0 + 32.0;
    std::cout << "Фаренгейт: " << f << "\n";

    double f_in;
    std::cout << "Фаренгейт: ";
    std::cin >> f_in;
    double c_out = (f_in - 32.0) * 5.0 / 9.0;
    std::cout << "Цельсий: " << c_out << "\n";

    int scale = 9 / 5; // integer division -> 1
    double f_buggy = c * scale + 32.0;
    std::cout << "Испорченная прямая формула: " << f_buggy << "\n";

    // Bug: integer division 9/5 gives 1, so formula adds 1*C instead of 1.8*C.
    // Double values may have tiny tails (e.g., 36.60000000000001) due to binary representation,
    // but cout's default precision (6 sig digits) hides them.
    return 0;
}