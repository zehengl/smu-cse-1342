#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

void selectionSort(int[], int); // Selection Sort prototype
void rollDice(int);             // Dice Roll prototype

/**
 * main - driver to prompt user for input and call the
 * other functions.
 */
int main()
{
    // Provide Options for User to Select
    bool letsContinue = true;
    while (letsContinue)
    {
        cout << " " << endl;
        cout << "Welcome to Programming Assignment/Lab 2\n";
        cout << "1 - Selection Sort\n";
        cout << "2 - Roll Dice Simulation\n";
        cout << "3 - End The Program\n";
        cout << "Select an Option\n";

        int optionSelected;
        // Read Option Selected from Input
        cin >> optionSelected;

        // Get value(s) and call desired function
        switch (optionSelected)
        {
        case 1:
            static const int SIZE = 10;
            int maxValue;
            cout << "Enter Maximum Value for Array Elements" << endl;
            cin >> maxValue;
            static int sortThisArray[SIZE];

            srand(time(0));

            // Fill array with random numbers between 1 - maxValue
            for (int i = 0; i < SIZE; ++i)
                sortThisArray[i] = 1 + rand() % maxValue;

            cout << "\nUnsorted array is:\n";

            // display unsorted array
            for (int j = 0; j < SIZE; ++j)
                cout << ' ' << sortThisArray[j] << ' ';

            selectionSort(sortThisArray, SIZE); // sort the array

            cout << "\n\nSorted array is:\n";

            // display sorted array
            for (int k = 0; k < SIZE; ++k)
                cout << ' ' << sortThisArray[k] << ' ';

            cout << '\n'
                 << endl;
            break;
        case 2:
            int numberOfRolls;
            cout << "Enter Number of Times to Roll the Dice" << endl;
            cin >> numberOfRolls;
            rollDice(numberOfRolls);
            break;
        case 3:
            letsContinue = false;
            break;
        default:
            letsContinue = false;
            break;
        }
    }

    // Display Finished Message
    cout << "Finished" << endl;
    return 0;
}

/**
 * selectionSort - recursive selection sort of passed array.
 */
void selectionSort(int array[], int size)
{
    int temp; // temporary variable used for swapping

    // sort array until only one element is left
    if (size >= 1)
    {
        // find smallest element and put it in first position
        for (int loop = 0; loop < size; ++loop)
        {
            if (array[loop] < array[0])
            {
                temp = array[loop];
                array[loop] = array[0];
                array[0] = temp;
            }
        }

        // Recursive call to selectionSort
        selectionSort(&array[1], size - 1);
    }
}

/**
 * rollDice - simulation of rolling two dice.
 */
void rollDice(int numberOfRolls)
{
    static const int SIZE = 13;

    // Array expected contains counts for the expected
    // number of times each sum occurs in 36 rolls of the dice
    static int expected[SIZE] = {0, 0, 1, 2, 3, 4, 5, 6, 5, 4, 3, 2, 1};
    int x; // first die
    int y; // second die
    static int sum[SIZE] = {};
    for (int i = 0; i < SIZE; i++)
        sum[i] = 0;

    srand(time(0));

    // Roll dice numberOfRolls times.
    // Keep count of each sum of the two dice.
    for (long i = 1; i <= numberOfRolls; ++i)
    {
        x = 1 + rand() % 6;
        y = 1 + rand() % 6;
        ++sum[x + y];
    }

    cout << setw(10) << "Sum" << setw(10) << "Total" << setw(10)
         << "Expected" << setw(10) << "Actual\n"
         << fixed << showpoint;

    // Display results of rolling dice
    for (int j = 2; j < SIZE; ++j)
        cout << setw(10) << j << setw(10) << sum[j]
             << setprecision(3) << setw(9)
             << 100.0 * expected[j] / 36 << "%" << setprecision(3)
             << setw(9) << 100.0 * sum[j] / numberOfRolls << "%\n";
}
