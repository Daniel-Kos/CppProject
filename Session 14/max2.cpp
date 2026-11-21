#include <iostream>

int main() {
    int a, b;
    std::cout << "Enter two integers: ";
    std::cin >> a >> b;

    int max = (a > b) ? a : b;
    std::cout << "Max: " << max << std::endl;

    std::cout << (a > b ? "First is greater" : (a < b ? "Second is greater" : "Numbers are equal")) << std::endl;
    
    return 0;
}