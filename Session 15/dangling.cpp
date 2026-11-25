#include <iostream>

int main()
{
    int group = 1;
    int score = 9;

    if (group == 1)
    {
        if (score >= 8)
        {
            std::cout << "Утренняя смена, допуск есть" << std::endl;
        }
        else
        {
            std::cout << "Утренняя смена, допуска нет" << std::endl;
        }
    }
    else
    {
        std::cout << "Вечерняя смена" << std::endl;
    }

    // Without braces, else binds to the nearest if (score >= 8).
    // For (group 1, score 5), nothing prints — the else belongs to the inner if.
    return 0;
}