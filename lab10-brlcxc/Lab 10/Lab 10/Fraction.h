#pragma once
// Bishop Lohman
// 4/4/22
// Lab 10

#include <iostream>
using namespace std;

class Fraction
{

	// Add the variables and functions you need to. getGCD and reduce are 
	// provided for you.

private:
	int getGCD(int num1, int num2);
	int getLCM(int num1, int num2);
	int numerator;
	int denominator;

public:
	void reduce();
	friend ostream& operator<< (ostream& output, const Fraction& fract);
	friend istream& operator>> (istream& input, Fraction& fract);
	const Fraction operator+(Fraction rhs);
	const Fraction operator-(Fraction rhs);
	const Fraction operator*(Fraction rhs);
	const Fraction operator/(Fraction rhs);
	bool operator==(Fraction& rhs);
	Fraction();



};

