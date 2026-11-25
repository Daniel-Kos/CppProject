#include <iostream>

int main()
{
    int gpa, skips;
    std::cout << "Enter GPA and skips: ";
    std::cin >> gpa >> skips;

    if (gpa < 0 || gpa > 10)
    {
        std::cout << "Ошибка: балл от 0 до 10" << std::endl;
        return 0;
    }

    std::cout << (gpa >= 8 && skips <= 2
                  ? "Стипендия назначена"
                  : "Стипендия не назначена") << std::endl;
    return 0;
}