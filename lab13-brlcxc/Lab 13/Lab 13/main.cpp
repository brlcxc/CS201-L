#include "template.cpp"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void main() {
	ifstream finInt("integers-1.txt"), finDouble("doubles-1.txt"), finString("strings.txt");

	int count = 0;
	const int size = 100;
	int intArray[size];
	double doubleArray[size];
	string stringArray[size];

	while (finInt.good()) {
		finInt >> intArray[count];
		count++;
	}

	count = 0;

	while (finDouble.good()) {
		finDouble >> doubleArray[count];
		count++;
	}

	count = 0;

	while (finString.good()) {
		finString >> stringArray[count];
		count++;
	}

	cout << "Integers:" << endl;
	cout << "Swapped items at positions 10 and 20" << endl;
	cout << "Before: [10] " << intArray[10] << " [20] " << intArray[20] << endl;
	mySwap(intArray, size, 10, 20);
	cout << "After: [10] " << intArray[10] << " [20] " << intArray[20] << endl;
	cout << "Minimum: " << myMin(intArray, size) << endl;
	cout << "Maximum: " << myMax(intArray, size) << endl;
	cout << "The number 1 is at position " << mySearch(intArray, size, 1) << endl;
	cout << "The number 5 is at position " << mySearch(intArray, size, 5) << endl;

	cout << endl << "Doubles:" << endl;
	cout << "Swapped items at positions 10 and 20" << endl;
	cout << "Before: [10] " << doubleArray[10] << " [20] " << doubleArray[20] << endl;
	mySwap(doubleArray, size, 10, 20);
	cout << "After: [10] " << doubleArray[10] << " [20] " << doubleArray[20] << endl;
	cout << "Minimum: " << myMin(doubleArray, size) << endl;
	cout << "Maximum: " << myMax(doubleArray, size) << endl;
	cout << "The number 4.62557 is at position " << mySearch(doubleArray, size, 4.62557) << endl;
	cout << "The number 1.23456 is at position " << mySearch(doubleArray, size, 1.23456) << endl;

	cout << endl << "Strings:" << endl;
	cout << "Swapped items at positions 10 and 20" << endl;
	cout << "Before: [10] " << stringArray[10] << " [20] " << stringArray[20] << endl;
	mySwap(stringArray, size, 10, 20);
	cout << "After: [10] " << stringArray[10] << " [20] " << stringArray[20] << endl;
	cout << "Minimum: " << myMin(stringArray, size) << endl;
	cout << "Maximum: " << myMax(stringArray, size) << endl;
	string targetOne = "Shoes", targetTwo = "Pumkin";
	cout << "The word Shoes is at position " << mySearch(stringArray, size, targetOne) << endl;
	cout << "The word Pumpkin is at position " << mySearch(stringArray, size, targetTwo) << endl;
}