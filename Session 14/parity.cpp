#include <iostream>

int main() {
    int num;
    std::cout << "Enter an integer: ";
    std::cin >> num;

    std::cout << num << " is " << (num % 2 == 0 ? "even" : "odd") << std::endl;
    
    return 0;
}