# Session 9 Review and Checkpoint
### 1. Type Sizes
*   `int` typically occupies **4 bytes** (32 bits).
*   `long long` typically occupies **8 bytes** (64 bits).
*   Upper bound of a signed 32-bit `int`: **2,147,483,647**.

### 2. `int` Overflow
The program did not stop because C++ by default **does not check for overflow** on primitive types. Adding `2147483647 + 1` causes *undefined behavior*, but in practice most compilers use two's complement, where the maximum value wraps around to the minimum: `-2147483648`.

### 3. `0.1 + 0.2 == 0.3`
Result: **0** (false).
Floating-point numbers (float/double) are stored in IEEE 754 binary format, where `0.1`, `0.2`, and `0.3` cannot be represented exactly. The sum `0.1 + 0.2` yields `0.30000000000000004`, which is not strictly equal to `0.3`.

### 4. Printing `char` and `int`
*   `std::cout << '0' + 1;` prints **49**. The character `'0'` is implicitly promoted to `int` (its ASCII code is 48), then 1 is added.
*   `std::cout << static_cast<char>('0' + 1);` prints **1**. The result of the addition (49) is explicitly cast back to `char`, which is interpreted as the character with code 49 — the digit '1'.

### 5. Modifying a `const` Variable
Attempting to assign a new value to a variable declared as `const` will cause a **compilation error**. The compiler will reject the code at build time because `const` makes the variable read-only.

### 6. Casting `double` to `int`
*   `static_cast<int>(-2.7)` equals **-2**.
*   `static_cast<int>(2.7)` equals **2**.
    The rule: when explicitly casting a floating-point number to an integer, the **fractional part is simply truncated** (truncation toward zero). This is not mathematical rounding; it cuts off everything after the decimal point.
## Task 2 Program execution

It will come out to: 
```text
1239 rubles
90 kopecks
```
That’s my gut feeling

## Checkpoint 1 Prediction
```text
-2
G
68
3 3.4
```
## Checkpoint 2 Research (5000 points)
Rank becomes `?` (ASCII 63). `'D'` (68) - 5 = 63, which is not a letter. Valid letters only for levels 0, 1, 2, 3 (D, C, B, A).