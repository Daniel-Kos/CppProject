#include <iostream>

int main() {
    int price, qty;
    std::cout << "Enter price and quantity: ";
    std::cin >> price >> qty;

    // Early exit if quantity < 1
    if (qty < 1) {
        std::cout << "Quantity must be at least 1" << std::endl;
        return 0;
    }

    int sum = price * qty;

    // Discount cascade using if-else
    int percent = 0;
    if (sum > 5000) percent = 10;
    else if (sum > 1000) percent = 5;

    // If easy: ternary version (commented out)
    // int percent = sum > 5000 ? 10 : (sum > 1000 ? 5 : 0);

    int discount = sum * percent / 100;
    int toPay = sum - discount;

    std::cout << "Sum: " << sum << ", discount " << percent << "%, to pay: " << toPay << std::endl;

    int paid;
    std::cout << "Enter paid amount: ";
    std::cin >> paid;

    if (paid >= toPay) {
        std::cout << "Payment successful" << std::endl;
        std::cout << "Change: " << (paid - toPay) << " rub" << std::endl;
    } else {
        std::cout << "Insufficient funds: need " << (toPay - paid) << " rub more" << std::endl;
    }

    // Category via ternary
    std::cout << "Category: " << (toPay > 4000 ? "major discount" : "regular purchase") << std::endl;

    // Explanation for sum exactly 5000:
    // The condition is `sum > 5000`, not `>=`. At sum = 5000, the condition is false,
    // so the discount falls to the next branch (sum > 1000) -> 5%. If it were `>=`,
    // the discount would be 10% at exactly 5000, changing the toPay amount.
    // The 0% discount is safe because `sum * 0 / 100` equals 0, leaving `toPay = sum`.

    return 0;
}