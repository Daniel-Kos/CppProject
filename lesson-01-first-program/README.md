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
