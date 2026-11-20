#include <iostream>
#include <string>
 
int main()
{
    std::string name;
    int points;
    double hours;
 
    std::cout << "Имя: "; std::cin >> name;
    std::cout << "Очки: "; std::cin >> points;
    std::cout << "Часы: "; std::cin >> hours;
 
    int level = points / 1000;
    int progress = static_cast<int>(((points % 1000) / 1000.0) * 100 + 0.5);
    long long ms = static_cast<long long>(hours * 3600 * 1000);
    char rank = 'D' - level;
    const int record = 2000;
 
    std::cout << "Игрок: " << name << "\n";
    std::cout << "Очки: " << points << ", уровень: " << level << "\n";
    std::cout << "Прогресс до уровня " << level + 1 << ": " << progress << "%\n";
    std::cout << "Миллисекунд в игре: " << ms << "\n";
    std::cout << "Ранг: " << rank << "\n";
    std::cout << "Рекорд побит: " << (points > record) << "\n";
 
    // Research: 5000 points -> rank '?' (ASCII 63). 'D'(68) - 5 = 63 (not a letter).
    // Valid letters: levels 0-3 (D, C, B, A).
 
    return 0;
}