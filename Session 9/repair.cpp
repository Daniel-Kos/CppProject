#include <iostream>

int main()
{
    int goals = 27;                                // string А ; forgotten
    double avgGoals = static_cast<double>(goals) / 8;   // string Б i in static_cast forgotten
    std::cout << "Всего голов: " << goals << std::endl;
    std::cout << "Среднее за матч: " << avgGoals << std::endl;
    std::cout << "Мячей сыграно: " << static_cast<int>(8.9) << std::endl;  // string В static_cast<int> forgotten >
    return 0;
}