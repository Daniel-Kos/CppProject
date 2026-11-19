#include <cmath>
#include <iostream>

double hours;
int rate;

int main() {
    std::cout << "Enter the hours and the rate, separated by a space: ";
    std::cin >> hours >> rate;

    int kopecks = (hours * rate * 100);
    int another_hours = hours;

    std::cout << "Time: " << another_hours << "h " << std::round((hours - another_hours) * 60) << "min" << std::endl;
    std::cout << "Salary: " << kopecks / 100 << "rub " << kopecks % 100 << "kop" << std::endl;
}