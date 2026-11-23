#include <iostream>

int main() {
    double distance, time;
    std::cout << "Расстояние и время: ";
    std::cin >> distance >> time;
    std::cout << "Скорость: " << distance / time << "\n";
    return 0;
}