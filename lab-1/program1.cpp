#include <iostream> // allows program to perform input and output
using namespace std;

void displayFibonacci(int);
bool isPrime(int);

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
		cout << "Welcome to Programming Assignment/Lab 1\n";
		cout << "1 - Fibonacci Sequence\n";
		cout << "2 - Prime Numbers\n";
		cout << "3 - End The Program\n";
		cout << "Select an Option\n";

		int optionSelected;
		// Read Option Selected from Input
		cin >> optionSelected;

		// Get value(s) and call desired function
		switch (optionSelected)
		{
		case 1:
			int fibonacciValue;
			cout << "Enter Fibonacci Sequence value" << endl;
			cin >> fibonacciValue;
			displayFibonacci(fibonacciValue);
			break;
		case 2:
			//Payment();
			int primeNumberToCheck;
			cout << "Enter Prime Number value" << endl;
			cin >> primeNumberToCheck;
			isPrime(primeNumberToCheck);
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
 * displayFibonacci - display the Fibonacci Seqence
 * up to the specified value passed to it as the
 * valueToDisplayTo argument.
 */
void displayFibonacci(int valueToDisplayTo)
{

	// Display it
	cout << "Will Display the Fibonacci Sequence to:  "
		 << valueToDisplayTo
		 << endl;

	// Seed the 0th and 1st values
	// Fn_Minus2 = 0
	int Fn_Minus2 = 0;
	cout << Fn_Minus2 << endl;
	// Fn_Minus1 = 1
	int Fn_Minus1 = 1;
	cout << Fn_Minus1 << endl;

	// Fn = Fn_Minus1 + Fn_Minus2
	int Fn = Fn_Minus1 + Fn_Minus2;

	// while (Fn < valueToDisplayTo)
	while (Fn <= valueToDisplayTo)
	{
		// Display Fn
		cout << Fn << endl;
		// Fn_Minus2 = Fn_Minus1
		Fn_Minus2 = Fn_Minus1;
		// Fn_Minus1 = Fn
		Fn_Minus1 = Fn;
		// Fn = Fn_Minus1 + Fn_Minus2
		Fn = Fn_Minus1 + Fn_Minus2;
	}
	// Display Finished Message
	cout << "Finished Display" << endl;
}

/**
 * isPrime - check to see if the theNumberToCheck is prime.
 * Will check each number from 2 to theNumberToCheck-1 divides
 * without remainder into theNumberToCheck. If it does not then
 * it is prime.
 */
bool isPrime(int theNumberToCheck)
{

	// Check to see if it is Prime:
	for (int j = 2; j < theNumberToCheck; j++)
	{
		// Divide each integer from 2 to its value-1 into it
		// if there is no remainder (using "%" operator) then go next integer
		if (theNumberToCheck % j == 0)
		{
			cout << theNumberToCheck << " is Not prime" << endl;
			return false;
		}
	}
	cout << theNumberToCheck << " is prime" << endl;
	return true;
}
