#include <iostream>

int main() {
    char c;
    std::cout << "Enter uppercase letter: ";
    std::cin >> c;
    
    char next = c + 1;
    
    std::cout << "Letter: " << c << "\n";
    std::cout << "Next: " << next << "\n";

    // If you enter 'Z', the program prints '[' as the next character.
    // The alphabet ends at 'Z' (ASCII 90), but character codes continue, and 91 is '['.
    return 0;
}