# lab-2

You are to write a program named `program2.cpp` that is made up of three functions: `main`, `selectionSort` and `diceRolling`.
program2 does not involve the use of user-defined classes. You may not use global variables or Vectors.
However, you might have use of static local variables.

## main

Function main is to be used as a driver to prompt the user for input and call the other
two functions. It should present a menu to select options – e.g.:

    Welcome to Programming Assignment/Lab 2
    1 - Selection Sort
    2 - Roll Dice Simulation
    3 - End The Program
    Select an Option

This will allow the selections to be run multiple times.
You will need to verify that an option can be run multiple times successfully without abnormal side-effects.

## Recursive Selection Sort

Function `selectionSort` will implement a recursive Selection Sort on a static array of 10 ints (i.e. the size of the array is 10).
Function `main` will prompt the user for the maximum value of an element of the array.
This value will then be used to randomly fill each element of the array (i.e. between 1 and the maximum value).
The array and its size will be sent to the `selectionSort` [i.e. selectionSort(int array[], int size)] function to sort the array.
Note that the array can contain duplicate values.

Reference: [wiki](http://en.wikipedia.org/wiki/Selection_sort)

### Sample Run

```
Enter Maximum Value for Array Elements
100

Unsorted array is:
 81  15  89  21  89  24  79  21  81  32

Sorted array is:
 15  21  21  24  32  79  81  81  89  89
```

## Dice Rolling

Function `diceRolling` will implement a simulation of the rolling of two dice.
Function `main` will prompt the user for the number of times to roll the two dice.
The sum of the two dice values is to be calculated.
Use a one-dimensional static array (no Vectors) to tally the number of times each sum appears.
The function will then print the results in a tabular format.
Also, determine if the totals are reasonable.
For example, there are six ways to roll a 7, so one-sixth (i.e. 6/36) of all the rolls should be a 7.

### Sample Run

```
Enter Number of Times to Roll the Dice
100
       Sum     Total  Expected   Actual
         2         6    2.778%    6.000%
         3         3    5.556%    3.000%
         4         6    8.333%    6.000%
         5        14   11.111%   14.000%
         6        12   13.889%   12.000%
         7        17   16.667%   17.000%
         8        10   13.889%   10.000%
         9        16   11.111%   16.000%
        10         6    8.333%    6.000%
        11         6    5.556%    6.000%
        12         4    2.778%    4.000%
```

---

## Comiple and Run

    g++ program2.cpp

Execute `a.exe` in Windows or `a.out` in Linux/macOS
