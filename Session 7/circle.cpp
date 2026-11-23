#include <iostream>

int main() {
    const double PI = 3.14159;
    double r;
    
    std::cout << "Enter radius: ";
    std::cin >> r;

    std::cout << "Radius: " << r << "\n";
    std::cout << "Area: " << r * r * PI << "\n";

    return 0;
}