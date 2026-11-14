#include <iostream>
int minuts;
int price;
int tickets;
int entered;

int main() {
    std::cout << "Minuts: "; std::cin >> minuts;
    std::cout << "Ticket price: "; std::cin >> price;
    std::cout << "Tickets: "; std::cin >> tickets;
    std::cout << "Entered: "; std::cin >> entered;

    std::cout << "Session: " << minuts / 60 << "h " << minuts % 60 << "min" << std::endl;
    std::cout << "Amount due: " << tickets * price << std::endl;
    std::cout << "Surrender: " << entered - (tickets * price) << std::endl;
    std::cout << "Surrender " << entered - (tickets * price) << ". Thank you!" << std::endl;
}