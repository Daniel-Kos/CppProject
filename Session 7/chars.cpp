#include <iostream>

int main() {
    std::cout << 'A' << "\n";
    std::cout << static_cast<int>('A') << "\n";
    std::cout << 'a' << "\n";
    std::cout << '0' << "\n";
    std::cout << 0 << "\n";

    // '0' is a character stored as integer 48 (ASCII code).
    // 0 is the actual integer number zero.
    // They look identical on screen but have different types and values.
    return 0;
}