#include <iostream>

int main()
{
    std::cout << "1) " << (5 > 3 && 8 < 6) << " "
              << (5 > 3 || 8 < 6) << std::endl;
    // 1 && 0 = 0; 1 || 0 = 1.

    int age = 5;
    if (age = 18) // Assignment, not comparison
    {
        std::cout << "2) ветка выполнилась" << std::endl;
    }
    std::cout << "2) age = " << age << std::endl;
    // age becomes 18.

    int x = -5;
    std::cout << "3) " << (0 < x < 10) << " "
              << (x > 0 && x < 10) << std::endl;
    // 0 < -5 is 0, then 0 < 10 is 1. Correct check gives 0.

    int a = 16;
    bool hasPass = true;
    std::cout << "4) " << !(a >= 18 && hasPass) << " "
              << (a < 18 || !hasPass) << std::endl;
    // De Morgan: !(A && B) == !A || !B
    a = 25;
    std::cout << "4) " << !(a >= 18 && hasPass) << " "
              << (a < 18 || !hasPass) << std::endl;
    return 0;
}