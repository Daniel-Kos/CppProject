#include <iostream>

// Errors:
// 1. Line A: Missing parentheses around ternary in cout.
// 2. Line B: Logic inverted (>= 90 should be "отлично", otherwise "хорошо").

int main()
{
    int score = 82;
    std::cout << (score >= 60 ? "сдан" : "не сдан") << std::endl; // Fixed A
    std::cout << (score >= 90 ? "отлично" : "хорошо") << std::endl; // Fixed B
    return 0;
}