#include <iostream>

int main() {
    int age;
    int passInput;
    
    std::cout << "Enter age: ";
    std::cin >> age;
    std::cout << "Enter pass code (0 = no pass): ";
    std::cin >> passInput;
    
    bool hasPass = passInput != 0;
    bool isAdult = age >= 18;
    bool access = isAdult && hasPass;
    bool discount = (age <= 12) || (age >= 65);
    
    std::cout << "Adult: " << isAdult << "\n";
    std::cout << "Access: " << access << "\n";
    std::cout << "Discount: " << discount << "\n";
    std::cout << "Deny: " << !access << "\n";
    
    bool demorgan1 = !((age < 18) || !hasPass);
    bool demorgan2 = age >= 18 && hasPass;
    std::cout << "De Morgan match: " << demorgan1 << " " << demorgan2 << "\n";
    
    return 0;
}