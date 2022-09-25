#include <iostream>
using namespace std;

int main() {
	const double CHILD = 10.95, ADULTS = 19.99, SENIORS = 18.99, VIP = 7.99;
	int count = 0, numPeople;
	char userInput;
	double grandTotal = 0;

	cout << "Welcome to Fun Park Menu System !!" << endl;
	
	while (count < 3) {
		int childTicket = 0, adultTicket = 0, seniorTicket = 0, VIPTicket = 0;
		double sum = 0;
		++count;
		cout << "Starting day " << count;
		while (true) {
			cout << endl << "Enter (C)hildren, (A)dults, (S)eniors, (V)IP or (Q)uit >> ";
			cin >> userInput;
			userInput = tolower(userInput);
			if (userInput != 'q') {
				switch (userInput) {
				case 'c':
					cout << endl << "How many children? ";
					cin >> numPeople;
					childTicket += numPeople;
					break;
				case 'a':
					cout << endl << "How many adults? ";
					cin >> numPeople;
					adultTicket += numPeople;
					break;
				case 's':
					cout << endl << "How many seniors? ";
					cin >> numPeople;
					seniorTicket += numPeople;
					break;
				case 'v':
					cout << endl << "How many VIP? ";
					cin >> numPeople;
					VIPTicket += numPeople;
					break;
				default:
					cout << endl << "Incorrect input" << endl << "Please try again" << endl;
					break;
				}
			}
			else {
				sum = childTicket * CHILD + adultTicket * ADULTS + seniorTicket * SENIORS + VIPTicket * VIP;
				grandTotal += sum;
				cout << endl << "Day " << count << endl;
				cout << "	Child " << childTicket << " @ " << CHILD << " = " << childTicket * CHILD << endl;
				cout << "	Adult " << adultTicket << " @ " << CHILD << " = " << adultTicket * ADULTS << endl;
				cout << "	Senior " << seniorTicket << " @ " << CHILD << " = " << seniorTicket * SENIORS << endl;
				cout << "	VIP " << VIPTicket << " @ " << CHILD << " = " << VIPTicket * VIP << endl << endl;
				cout << "	Total = " << sum << endl << endl;
				break;
			}
		}
	}
	cout << endl << "The total for all days is " << grandTotal << endl;
}