#pragma once

long factorial_r(long value);
//An integer is entered into the function
//The factorial of the integer is returned 

int fibonacci_r(int n);
//The integer n is entered which is the location within the fibonacci sequence
//The value of the fibonacci sequence at n is returned 

bool is_prime_r(int value, int n = 2);
//An integre is input into the function
//Whether or not the number is prime is returned

int sum_r(int list[], int list_size);
//A list and its size is input
//The sum of all the values within the list is returned

void output_reverse_list_r(int list[], int list_size);
//A list and its size is input
//The elements from the list are output in reverse order