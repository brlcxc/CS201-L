#include <iostream>
#include "function.h"

using namespace std;

void main() {
	int input, prime, numbers[5];
	cout << "Enter an integer" << endl;
	cin >> input;

	cout << endl << input << "! = " << factorial_r(input) << endl;

	cout << endl << "fibonacci(" << input << ") = " << fibonacci_r(input) << endl;

	cout << endl << "Enter a number to check if it is a prime number" << endl;
	cin >> prime;
	if (is_prime_r(prime))
		cout << prime << " is a prime number" << endl;
	else
		cout << prime << "is not a prime number" << endl;

	cout << endl << "Next we will enter 5 values into an array" << endl;
	for (int i = 0; i < 5; ++i) {
		cout << "Enter a value for index " << i << endl;
		cin >> numbers[i];
	}

	cout << "The sum of all values is " << sum_r(numbers, 5) << endl;

	cout << "The lsit output in reverse is" << endl;
	output_reverse_list_r(numbers, 5);
}