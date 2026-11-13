#include <iostream>
int number_one, number_two;

int main() {
    std::cout << "Input first number: " << std::endl;
    std::cin >> number_one;
    std::cout << "Input second number: " << std::endl;
    std::cin >> number_two;
    std::cout << "Sum: " <<number_one + number_two << std::endl;
    std::cout << "Difference: " << number_one - number_two << std::endl;
    std::cout << "Product: " << number_one * number_two << std::endl;
    return 0;
}