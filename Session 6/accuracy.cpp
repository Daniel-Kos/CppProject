#include <iostream>

int main() {
    double sum = 0.1 + 0.2;
    std::cout << "Сумма: " << sum << "\n";
    std::cout << "Сумма равна 0.3? " << (sum == 0.3) << "\n";
    double third = 1.0 / 3.0;
    std::cout << "Треть: " << third << "\n";

    // 0.1 and 0.2 cannot be exactly represented in binary. Their sum is slightly > 0.3.
    // cout prints 6 significant digits by default, hiding the tiny error in line 1.
    // The comparison fails due to the exact binary difference.
    // 1.0/3.0 is repeating in binary; cout shows only 6 sig digits.
    return 0;
}