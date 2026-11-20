#include <iostream>

int main() {
    int x = 5;
    std::cout << "x=5: 0<x<10 = " << (0 < x < 10) << ", correct = " << (x > 0 && x < 10) << "\n";
    
    x = -5;
    std::cout << "x=-5: 0<x<10 = " << (0 < x < 10) << ", correct = " << (x > 0 && x < 10) << "\n";
    
    // Explanation for x = -5:
    // Step 1: Evaluate 0 < -5. This is false, which returns integer 0.
    // Step 2: Evaluate the result (0) < 10. This is true, which returns 1.
    // Therefore, the whole expression returns 1.
    
    return 0;
}