// Bishop Lohman
// 4/6/22
// Lab 10

#include "Fraction.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

// Find the greatest common denominator (GCD)
// For reducing
int Fraction::getGCD(int num1, int num2)
{
	int remainder = num2 % num1;
	if (remainder != 0)
		return getGCD(remainder, num1);
	return num1;
}

// Reduce/simplify a fraction
void Fraction::reduce()
{
	// Alter this function later to adjust for negative values
	int gcd = getGCD(numerator, denominator);
	numerator /= gcd;
	denominator /= gcd;
	if (denominator < 0) {
		numerator *= -1;
		denominator *= -1;
	}
}

int Fraction::getLCM(int num1, int num2) 
{
	int newNum1 = num1;
	int newNum2 = num2;
	while (newNum1 != newNum2)
	{
		if (newNum1 > newNum2)
			newNum2 += num2;
		else
			newNum1 += num1;
	}
	return newNum1;
}

Fraction::Fraction()
{
	numerator = 0;
	denominator = 0;
}

ostream& operator<< (ostream& output, const Fraction& fract)
{
	output << fract.numerator << "/" << fract.denominator;
	return output;
}

istream& operator>> (istream& input, Fraction& fract)
{
	char slash;
	input >> fract.numerator;
	input >> slash;
	input >> fract.denominator;
	return input;
}

const Fraction Fraction::operator+(Fraction rhs) 
{
	Fraction newFract;

	int LCM = getLCM(denominator, rhs.denominator);
	newFract.numerator = (LCM / denominator) * numerator + (LCM / rhs.denominator) * rhs.numerator;
	newFract.denominator = LCM;
	newFract.reduce();
	return newFract;
}

const Fraction Fraction::operator-(Fraction rhs)
{
	Fraction newFract;
	int LCM = getLCM(denominator, rhs.denominator);
	newFract.numerator = (LCM / denominator) * numerator - (LCM / rhs.denominator) * rhs.numerator;
	newFract.denominator = LCM;
	newFract.reduce();
	return newFract;
}

const Fraction Fraction::operator*(Fraction rhs)
{
	Fraction newFract;
	newFract.numerator = numerator * rhs.numerator;
	newFract.denominator = denominator * rhs.denominator;
	newFract.reduce();
	return newFract;
}

const Fraction Fraction::operator/(Fraction rhs)
{
	Fraction newFract;
	newFract.numerator = numerator * rhs.denominator;
	newFract.denominator = denominator * rhs.numerator;
	newFract.reduce();
	return newFract;
}

//I removed const because otherwise I could not properly check the rhs
bool Fraction::operator==(Fraction& rhs)
{
	reduce();
	rhs.reduce();
	if ((numerator == rhs.numerator) && (denominator == rhs.denominator))
		return true;
	return false;
}

/* 
General pattern for overloaded operators: 
   1. Declare new object as local variable 
   2. Assign values as needed--in this case, to numerator & denominator
   3. return new object
Note that for most operators, the return type is a const object or const reference to object. 
That's so this: 

A + B = C; 

isn't legal, but 

C = A + B; 

is. 
*/ 
