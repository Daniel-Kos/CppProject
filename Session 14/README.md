# Lesson 14

## Task 1: Parity Predictions
- Input 10 -> `10 is even`
- Input 7  -> `7 is odd`

## Task 2: Max2 Predictions
- Input 7 3 -> `Max: 7` and `First is greater`
- Input 3 7 -> `Max: 7` and `Second is greater`
- Input 5 5 -> `Max: 5` and `Numbers are equal`

## Task 3: Checkout Predictions and Runs
**Test 1 (price 1350, qty 4, paid 5000):**
Sum: 5400, discount 10%, to pay: 4860
Payment successful
Change: 140 rub
Category: major discount

**Test 2 (price 900, qty 4, paid 3000):**
Sum: 3600, discount 5%, to pay: 3420
Insufficient funds: need 420 rub more
Category: regular purchase

**Test 3 (price 700, qty 1, paid 700):**
Sum: 700, discount 0%, to pay: 700
Payment successful
Change: 0 rub
Category: regular purchase

## "If it was easy": Ternary Discount Cascade
The ternary version produces identical results on all three tests.
- **Readability:** The `else if` cascade is easier to read for multiple branches.
- **Scaling:** With five discounts, nested ternaries become unreadable; `else if` remains clear.