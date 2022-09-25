#include <iostream>
#include <string>
using namespace std;

void Deposit(float& account, float amount) {
	account = account + amount;
}

char MainMenu() {
	char userInput = 'n';

	while ((userInput != 'd') && (userInput != 'w') && (userInput != 'l') && (userInput != 'q')) {
		cout << "Main Menu ( Enter one of the following )" << endl;
		cout << "	(D)eposit, (W)ithdrawal, (L)oan, or (Q)uit" << endl;
		cin >> userInput;
		userInput = tolower(userInput);
	}
	return userInput;
}

float GetValue(string userString) {
	float amountToWithdraw;
	while (true) {
		cout << userString;
		cin >> amountToWithdraw;
		return amountToWithdraw;
	}

}

float GetValue(string display, int upperLimit) {
	int amountWithdraw;
	while (true) {
		cout << "How much do you want to withdraw? ==> ";
		cin >> amountWithdraw;
		if ((amountWithdraw > 0) && (amountWithdraw < upperLimit))
			return amountWithdraw;
		cout << "You must enter an amount less than or equal to " << upperLimit << endl;
	}
}

float GetInterestRate(int creditScore) {
	if (creditScore <= 500)
		return 0.05;
	else if (creditScore <= 700)
		return 0.03;
	else
		return 0.01;
}

void Withdraw(float& userBalance, float withdrawAmount) {
	userBalance -= withdrawAmount;
}

int GetLoanMonths() {
	cout << endl;
	while (true) {
		int loanMonths;
		cout << "How many months for the loan?  12, 24, 36, or 60 ==> ";
		cin >> loanMonths;
		if ((loanMonths == 12) || (loanMonths == 24) || (loanMonths == 26) || (loanMonths == 60)) {
			cout << endl;
			return loanMonths;
		}
		cout << "You must enter 12, 24, 36, or 60 only" << endl << endl; 
	}

}

int GetCreditRating() {
	int creditRating;
	while (true) {
		cout << "What is your credit rating? [300, 850] ==> ";
		cin >> creditRating;
		if ((creditRating >= 300) && (creditRating <= 700)) {
			return creditRating;
		}
		cout << "You must choose a value from 300 - 850 inclusive." << endl << endl;
	}
}

float CalculateLoanAmount(int principal, float interestRate, int numMonths) {
	return principal * (pow(1 + (interestRate / 12), (numMonths / 12)));
}

void OutputAccount(float amount) {
	cout << endl << "Summary of Account" << endl;
	cout << "	Amount $" << amount << endl << endl;
}