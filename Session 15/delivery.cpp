#include <iostream>

int main()
{
    int weight, zone, urgency;
    std::cout << "Enter weight, zone, urgency: ";
    std::cin >> weight >> zone >> urgency;

    if (weight < 1)
    {
        std::cout << "Ошибка: вес должен быть не меньше 1" << std::endl;
        return 0;
    }

    int cost = 0;

    switch (zone)
    {
    case 1: cost += 50;  break;
    case 2: cost += 120; break;
    case 3: cost += 250; break;
    default:
        std::cout << "Ошибка: зоны с кодом " << zone << " нет" << std::endl;
        return 0;
    }

    if (weight > 10)      cost += 200;
    else if (weight > 5)  cost += 100;

    if (urgency == 1) cost += 150;

    std::cout << "К оплате: " << cost << " руб" << std::endl;
    std::cout << (weight > 5 && urgency == 1
                  ? "Груз: тяжёлый срочный"
                  : "Груз: стандартный") << std::endl;

    // Q1: Weight check must precede switch. If removed, weight=0, zone=1
    // would give a meaningless "К оплате: 50 руб".
    // Q2: weight > 5 alone is insufficient. Test (7, 3, 0) has weight>5 but
    // urgency=0, so status would be wrongly printed as "тяжёлый срочный".
    return 0;
}