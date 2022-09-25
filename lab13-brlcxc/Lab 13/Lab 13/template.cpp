#include <iostream>
#include <cstring>
#include <string>

using namespace std;

template<class T>
void mySwap(T array[], int size, int firstPosition, int secondPosition) {
	T temp = array[firstPosition];
	array[firstPosition] = array[secondPosition];
	array[secondPosition] = temp;
}

template<class T>
T myMin(T array[], int size) {
	T lowest = array[0];

	for (int i = 1; i < size; ++i) {
		if (array[i] < lowest)
			lowest = array[i];
	}

	return lowest;
}

template<class T>
T myMax(T array[], int size) {
	T highest = array[0];

	for (int i = 1; i < size; ++i) {
		if (array[i] > highest)
			highest = array[i];
	}

	return highest;
}

template<class T>
int mySearch(T array[], int size, T target) {
	for (int i = 1; i < size; ++i) {
		if (array[i] == target)
			return i;
	}

	return -1;
}