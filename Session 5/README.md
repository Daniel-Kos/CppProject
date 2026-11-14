# Integers

## Task 1. Sizes of types

**Program output:**
```text
int: 4
double: 8
char: 1
bool: 1
```

## Task 2. Overflow unfolding before your eyes

* **`2147483647` (Initial value):** The maximum positive value for a 32-bit signed `int` (2<sup>31</sup> - 1), stored in binary as `0` followed by thirty-one `1`s.
* **`-2147483648` (`+ 1`):** Adding `1` triggers **signed integer overflow** (Undefined Behavior in C++, typically wrapping around in two's complement), flipping the sign bit to `1` and all other bits to `0`, which represents the minimum `int` value (-2<sup>31</sup>).
* **`-2` (`* 2`):** Multiplying by `2` shifts all bits one position to the left (`11111111 11111111 11111111 11111110`), setting the sign bit to `1` and resulting in `-2` in two's complement representation.

```text
Was: 2147483647
It has become: -2147483648
Doubled: -2
```

## Task 3
**Program output:**
```text
Sum: 147000000
Earth population: 8100000000
```

## Task 4
**Program output:**
```text
Milliseconds in 20 year: 63072000000
```

