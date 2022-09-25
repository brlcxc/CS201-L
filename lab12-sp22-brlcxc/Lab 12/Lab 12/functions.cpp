#include <iostream>
#include <math.h>
#include "function.h"

using namespace std;

long factorial_r(long value) {
	if (value == 0)
		return 1;
	return value * factorial_r(value - 1);
}

int fibonacci_r(int n) {
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	return fibonacci_r(n - 1) + fibonacci_r(n - 2);
}

bool is_prime_r(int value, int n) {
	if (n > sqrt(value))
		return true;
	if (value % n == 0)
		return false;
	return  is_prime_r(value, n + 1);
}

int sum_r(int list[], int list_size) {
	if (list_size == 0)
		return 0;
	if (list_size == 1)
		return list[0];
	return list[list_size - 1] + sum_r(list, list_size - 1);
}

void output_reverse_list_r(int list[], int list_size) {
	cout << " " << list[list_size - 1];
	if (list_size != 1)
		output_reverse_list_r(list, list_size - 1);
}