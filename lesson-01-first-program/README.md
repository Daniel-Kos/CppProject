# Lesson 01. Practice. First program

MDK.01.05 Fundamentals of programming in C++. Topic 1, lesson 1 of 4.

Goal: master the write, compile, run cycle and learn to read compiler messages.

## Contents

| File | Task | Description |
|------|------|-------------|
| `hello.cpp`  | Task 1 | Prints `Hello, world!` |
| `greet.cpp`  | Task 2 | Prints a name and a group on two lines |
| `dialog.cpp` | Task 3* | Asks for a name and a birth year, prints a greeting and an approximate age |
| `build.sh`   | - | Builds all three programs into `bin/` |

## Requirements

- A C++ compiler with C++11 or newer support: `g++` from MinGW-w64 on Windows or the system `g++` on Linux.
- Check the installation:

`bash
g++ --version
`

## Build and run

### One program at a time

`bash
g++ hello.cpp -o hello
./hello          # Linux / macOS
hello.exe        # Windows
`

### All programs at once

`bash
bash build.sh
./bin/hello
./bin/greet
./bin/dialog
`

## Expected output

### hello.cpp

`
Hello, world!
`

### greet.cpp

`
Ivan
IS-31
`

Replace the two string literals in `greet.cpp` with your own name and group name.

### dialog.cpp

`
What is your name? Anna
What year were you born? 2007
Hello, Anna!
You are about 19 years old.
`

The age is computed as `2026 - birthYear`, so the result is approximate: it does not account for whether the birthday has already passed this year.

## Notes on encoding

The sources are stored in UTF-8. If Cyrillic text is used in string literals and the console shows garbage on Windows, switch the code page before running:

`bat
chcp 65001
`

In Visual Studio, save the file with a BOM or set `/utf-8` in the compiler options.

## Typical compiler errors

| Compiler message | Cause | Fix |
|------------------|-------|-----|
| `error: expected ';' ...` | Missing semicolon at the end of a statement | Add `;` at the end of the reported line |
| `fatal error: iostream: No such file or directory` | Typo in the header name | Write `#include <iostream>` |
| `'cout' was not declared in this scope` | `std` namespace not specified | Write `std::cout` or add `using namespace std;` |
| `undefined reference to 'main'` | `main` missing or misspelled | Check the `int main()` header and the braces |
| `g++: command not found` | Compiler not installed or not in `PATH` | Install MinGW-w64 or use an online compiler |

Rule for reading errors: start from the first message, later errors may be a chain reaction from the first one. The line number is reported next to the message.
