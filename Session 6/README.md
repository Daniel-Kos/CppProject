# Lesson 6

## Task 1: accuracy.cpp
**Output on test run:**
```text
Сумма: 0.3
Сумма равна 0.3? 0
Треть: 0.333333
```

Note: The comparison returns 0 because 0.1 and 0.2 cannot be represented exactly in binary (IEEE 754). 

The cout stream prints 6 significant digits by default, hiding the tiny difference in the first line. 

The same applies to 1.0 / 3.0.

## Task 2: weight.cpp
**Output on test run (100 lbs, 70 inches):**
```text
Вес в фунтах: 100
Вес в кг: 45.3592
Рост в дюймах: 70
Рост в см: 177.8
```

## Task 3: temperature.cpp
**Output on test run (36.6 C, 97.88 F):**
```text
Цельсий: 36.6
Фаренгейт: 97.88
Фаренгейт: 97.88
Цельсий: 36.6
Испорченная прямая формула: 68.6
```
Explanation of the intentional bug:
The correct direct formula uses 9.0 / 5.0 (floating-point division). 

In the buggy version, int scale = 9 / 5; performs integer division, resulting in scale = 1. 

Therefore, the formula becomes F = C * 1 + 32. For C = 36.6, the result is 68.6 instead of 97.88.

## Task 4*: travel.cpp
**Output on test run (100 km, 1.5 hours):**
```text
Расстояние и время: 100 1.5
Скорость: 66.6667
```

## Summary of Floating-Point Pitfalls
- Precision loss: Binary representation cannot exactly express fractions like 0.1 or 1/3. Therefore, direct == comparisons of double values are unreliable.
- Integer division inside formulas: Using integer literals (e.g., 9 / 5) in a floating-point formula silently truncates the fraction. Always use 9.0 / 5.0 or 1.8.
- Output precision: std::cout prints 6 significant digits by default, which can hide small tails like 0.000000000000005. Use std::setprecision to see more.