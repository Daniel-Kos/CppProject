#include <iostream>

int a, b, c;

int main() {
    std::cout << "Enter 3 ratings: ";
    std::cin >> a >> b >> c;
    std::cout << "Integer average: " << (a + b + c) / 3 << std::endl; // The result is an int, since we are dividing an int by an int.
    std::cout << "Float average: " << static_cast<double>(a + b + c) / 3 << std::endl; // And here we specify the `double` type, which is why it doesn't discard the part after the decimal point.
}