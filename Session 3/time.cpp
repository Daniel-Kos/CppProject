#include <iostream>
int minuts;
int main () {
    std::cout << "Enter minuts: ";
    std::cin >> minuts;
    std::cout << minuts / 60 << "h " << minuts % 60 << "min" << std::endl;
}