#include <iostream>

// An int takes up 32 bits, so its range from -2,147,483,648 to 2,147,483,647 (from -2³¹ to 2³¹-1) is explained by the fact that 1 bit is reserved for the sign, while the remaining 31 bits store the value using two's complement.

int main () {
    std::cout << "int: " << sizeof(int) << std::endl;
    std::cout << "double: " << sizeof(double) << std::endl;
    std::cout << "char: " << sizeof(char) << std::endl;
    std::cout << "bool: " << sizeof(bool) << std::endl;
}