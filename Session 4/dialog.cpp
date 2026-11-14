#include <iostream>
#include <string>
int favoriteNumber;
int main()
{
    std::string name;
    int birthYear;
    std::cout << "What is your name? ";
    std::cin >> name;
    std::cout << "In what year were you born? ";
    std::cin >> birthYear;
    std::cout << "Your favorite number? ";
    std::cin >> favoriteNumber;
    std::cout << "Hello, " << name << "!" << std::endl;
    std::cout << "To you, approximately " << 2026 - birthYear << " years." << std::endl;
    std::cout << "Your favorite number multiplied by 2: " << favoriteNumber * 2 << std::endl;
    return 0;
}