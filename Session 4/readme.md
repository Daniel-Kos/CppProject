# Review and Checkpoint

## Warm-up

### 1 // and /* ... */
`//` is a single-line comment, while `/* ... */` is a multi-line comment.

The former is more convenient for short notes or for explaining a specific line of code.

The latter is used for disabling large blocks of code, writing extensive text descriptions, or creating documentation.

### 2 Instruction

The program will print: `5+3=8` (and move the cursor to a new line).

### 3 endl and \n

Similarity: Both insert a newline character and move the cursor to the next line in output streams (e.g., `std::cout`).

Main Difference: `std::endl` forces a buffer flush (`std::flush`) after inserting a newline, whereas `\n` simply adds the newline character to the output buffer.

Performance:`\n` is significantly faster because it avoids extra system calls triggered by frequent buffer flushes.

Best Practice: Prefer `\n` by default. Use `std::endl` only when you explicitly need immediate output—such as during debugging or critical error logging before a potential crash.

### 4 Three type error


| Error Type | Stage of Occurrence | Program Behavior |
| :--- | :--- | :--- |
| **Syntax Error (Compile-time Error)** | During build (compilation) | The compiler or linker stops the build process and outputs an error message. |
| **Runtime Error** | After launch (at runtime) | The program launches successfully, but crashes or freezes when executing the faulty code. |
| **Logical Error** | After launch (at runtime) | The program runs without crashing, but produces an incorrect result or unexpected behavior. |

### 5 What is?

`7 / 2` = `3`

`7 % 2` = `1`

`125 % 60` = `5`

### 6. How does `7 / 2` differ from `7.0 / 2`? Why?

**`7 / 2` equals `3`**, while **`7.0 / 2` equals `3.5`**.

`7 / 2` (Integer division): Both operands are `int`, so C++ truncates the `.5` remainder.

`7.0 / 2` (Floating-point division): `7.0` is a `double`, so C++ implicitly promotes `2` to `2.0` (`double`) and keeps the decimal part.

## Task 1. Repair program

**Program output:**
```text
The introductory topic has been covered.
Let`s review and check ourselves.
Up next: variables and types.
```

## Task 2. Banner

```text
************************
* Kosmacev, RPO-25/1   *
* Review of the topic  *
************************
```

## Task 3. Program execution (dry run)

**Program output:** 
```text
Hello, Maria!
To you, approximately 18 years
```

# Checkpoint

## K1 Prediction

Program output: `25 rub 78 kop`

The conclusion and the assumption coincided.

```text
************************
* Kosmacev, RPO-25/1   *
* Review of the topic  *
************************
```

## K2 Cinema

```text
Minuts:150

Ticket price:250

Tickets:3

Entered:1000

Session: 2h 30min
Amount due: 750
Surrender: 250
Surrender 250. Thank you!
```