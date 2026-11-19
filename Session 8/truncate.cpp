#include<iostream>

int main() {
    std::cout << static_cast<int>(7.9) << std::endl;
    std::cout << static_cast<int>(7.3) << std::endl;
    std::cout << static_cast<int>(-7.9) << std::endl; //The result is -7 because `static_cast<int>` simply discarded everything after the decimal point.
    std::cout << static_cast<int>(-7.3) << std::endl;
}