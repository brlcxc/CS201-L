#include <iostream>
#include <string>
#include "checkingmodule.h"

using namespace std;

int main() {
	char userChoice;
	float accountAmount = 0.0;
	float ammountToAdd;
	int creditRating;
	int loanMonths;
	float loanAmount;
	float borrowAmount;
	float interestRate;
	float amountWithdrawn;
	string questionString;

	while (true) {
		userChoice = MainMenu();
		switch (userChoice) {
		case 'd':
			while (true) {
				cout << "How much do you want to deposit? ==> ";
				cin >> ammountToAdd;
				if (ammountToAdd < 1)
					cout << "You must enter an amount greater than 0" << endl;
				else {
					Deposit(accountAmount, ammountToAdd);
					break;
				}
			}
			OutputAccount(accountAmount);
			break;
		case 'w':
			amountWithdrawn = GetValue(questionString, accountAmount);
			Withdraw(accountAmount, amountWithdrawn);
	

			OutputAccount(accountAmount);
			break;
		case 'l':
			creditRating = GetCreditRating();
			interestRate = GetInterestRate(creditRating);
			loanMonths = GetLoanMonths();
			while (true) {
				cout << "How much do you want to borrow?	";
				cin >> borrowAmount;
				if (borrowAmount > 0)
					break;
			}
			loanAmount = CalculateLoanAmount(borrowAmount, interestRate, loanMonths);
			cout << endl << "Interest Rate : " << interestRate << endl;
			cout << "Principal : " << borrowAmount << endl;
			cout << "Months : " << loanMonths << endl;
			cout << "Your total loan amount is " << loanAmount << endl;
			accountAmount += borrowAmount;
			break;
		case 'q':
			cout << "Have a good day!" << endl;
			break;
		default:
			cout << "error" << endl;
			break;
		}
		if (userChoice == 'q')
			break;
	}

}
