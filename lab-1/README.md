# lab-1

You are to write a program named `program1.cpp` that is made up of three functions: `main`, `displayFibonacci`, and `isPrime`.
Function `main` is to be used as a driver to prompt the user for input and call the other two functions.
You may not use global variables.

## main

Function `main` is to be used as a driver to prompt the user for input and calling the other two functions.
It should present a menu to select options - e.g.:

    Welcome to Programming Assignment/Lab 1
    1 - Fibonacci Sequence
    2 - Prime Numbers
    3 - End The Program
    Select an Option

This will allow the selections to be run multiple times.
You will need to verify that an option can be run multiple times successfully without abnormal side-effects.

## Fibonacci Sequence

Function `displayFibonacci` will display the Fibonacci sequence up to a specified value passed to it as an argument.
The `main` function will prompt the user for an integer and pass it to `displayFibonacci`.

In mathematical terms, the sequence F<sub>n</sub> = F<sub>n-1</sub> + F<sub>n-2</sub>

with seed values

F<sub>0</sub> = 0 and F<sub>1</sub> = 1

Reference: [wiki](https://en.wikipedia.org/wiki/Fibonacci_number)

## Prime Numbers

Function isPrime determines if a number is prime.
Function `main` will prompt the user to input an integer value.
The value is then passed to `isPrime` which will test each number from 1 to the value passed to it to determine if it is a prime number.
If the number is prime then the `isPrime` will display the number on the screen.
An integer {1, 2, 3, ...} is called a prime number (or a prime) if it is bigger than one and has no divisors other than 1 and itself.

Reference: [wiki](https://en.wikipedia.org/wiki/Prime_number)

## Comiple and Run

    g++ program1.cpp

Execute `a.exe` in Windows or `a.out` in Linux/macOS
