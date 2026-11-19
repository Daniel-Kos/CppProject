# Session 8 Type conversion
***
## Task 1 Truncation before one’s eyes

```text
7
7
-7
-7
```

After the program was run, it yielded the **same values**.
***
## Task 2 Average score calculated in two ways

**Program output:**
```text
Integer average: 4
Float average: 4.66667
```
***
## Task 3 Timesheet — a comprehensive project

### Investigation: Why 20 minutes is printed instead of 21 without `+ 0.5`

1. In the binary number system, the decimal fraction `8.35` cannot be represented exactly, so in memory (as a `double`) it is stored as `8.3499999999999996...`.
2. Subtracting the integer part (`8.3499999999999996 - 8`) yields `0.34999999999999964...`.
3. Multiplying this by `60` results in `20.999999999999978...`.
4. The `static_cast<int>` operator does not round the number according to mathematical rules; it simply truncates (discards) the fractional part. As a result, `20.999999...` becomes `20`.
5. Adding `0.5` compensates for this floating-point representation error (`20.999999... + 0.5 = 21.499999...`), so truncating the fractional part gives the correct `21` minutes.