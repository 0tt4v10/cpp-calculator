# cpp-calculator

A simple terminal-based calculator built in C++ supporting basic arithmetic operations with input validation.

## Features

- Addition, Subtraction, Multiplication, Division (`+`, `-`, `*`, `/`)
- Input validation for operators
- Division by zero handling
- Results displayed with 2 decimal places

## Requirements

- C++ compiler (g++ or clang++)
- C++11 or higher

## Build

```bash
g++ -o calculator main.cpp
```

## Usage

```bash
./calculator
```

The program will prompt you step by step:

```
Basic Terminal Based Calculator

Insert first Number: 10
Choose a operator (+, -, *, /): /
Insert second Number: 3

Your answer is: 3.33
```

## Error Handling

| Situation | Behavior |
|---|---|
| Invalid operator | Prints error and exits with code `1` |
| Division by zero | Prints error and exits with code `1` |

## Author

**0tt4v10** – created 20.06.2026

## License

MIT
