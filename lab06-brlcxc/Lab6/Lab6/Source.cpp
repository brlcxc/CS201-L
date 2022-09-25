#include <iostream>
#include <vector>
#include "checkingmodule.h"
#include <string>
using namespace std;

void main() {
	vector<double> milesVect, gallonsVect;
	double miles, gallons, totalMPG;
	string badInput;
	char userInput;

		do {
			try{
				miles = GetMiles();
				gallons = GetGallons();
				milesVect.push_back(miles);
				gallonsVect.push_back(gallons);
			}
			catch (runtime_error& excpt) {
				cout << excpt.what() << endl;
				cin.clear();
				getline(cin, badInput);
			}

			while (true) {
				cout << endl << "Do you want to enter the information for another trip? y/n" << endl;
				cin >> userInput;
				getline(cin, badInput);
				if ((tolower(userInput) == 'y') || (tolower(userInput) == 'n')) {
					cout << endl;
					break;
				}
			}
		} while (tolower(userInput) != 'n');

		try {
			totalMPG = GetMPG(milesVect, gallonsVect);
			cout << "The total MPG is " << totalMPG << endl;
		}
		catch (runtime_error& excpt) {
			cout << excpt.what() << endl;
		}
}