#include <iostream>
#include <vector>
using namespace std;

double GetMiles() {
	double numMiles;
	cout << "Input the number of miles" << endl;
	cin >> numMiles;
	if (cin.fail())
		throw runtime_error("Invalid input received, you must enter a decimal number.");
	if (numMiles < 0)
		throw runtime_error("Miles cannot be less than 0.");
	return numMiles;
}

double GetGallons() {
	double numGallons;
	cout << "Input the number of gallons" << endl;
	cin >> numGallons;
	if (cin.fail())
		throw runtime_error("Invalid input received, you must enter a decimal number.");
	if (numGallons < 0)
		throw runtime_error("Gallons cannot be less than 0.");
	return numGallons;
}

double GetMPG(vector<double> miles, vector<double> gallons) {
	double mileSum = 0, gallonSum = 0;

	if ((miles.size() == 0) || (gallons.size() == 0))
		throw runtime_error("No values recorded MPG is nan.");

	for (unsigned int i = 0; i < miles.size(); ++i) {
		mileSum += miles.at(i);
	}
	for (unsigned int i = 0; i < gallons.size(); ++i) {
		gallonSum += gallons.at(i);
	}

	return mileSum / gallonSum;
}