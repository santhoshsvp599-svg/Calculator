# Simple Calculator

A command-line calculator written in C. It reads two numbers and an operator, then displays the result.

## Features

- Addition (`+`)
- Subtraction (`-`)
- Multiplication (`*`)
- Division (`/`), with a check that prevents division by zero
- Basic input and operator validation

## Requirements

- A C compiler, such as GCC or Clang

## Build and run

From the project directory, compile the program:

```sh
gcc Cal.c -o calculator
```

Run it on Windows PowerShell:

```powershell
.\calculator.exe
```

On macOS or Linux:

```sh
./calculator
```

## Example

```text
===== SIMPLE CALCULATOR =====
Enter first number: 12
Enter operator (+, -, *, /): *
Enter second number: 3
Result = 36.00
```

The program reports an error for invalid numeric input, an unsupported operator, or an attempt to divide by zero.
