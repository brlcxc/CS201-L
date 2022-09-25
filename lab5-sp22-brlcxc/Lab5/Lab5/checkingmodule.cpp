#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>
using namespace std;

double calcDistance(double x, double y, double z, double x2, double y2, double z2) {
	double distanceCalculation;

	distanceCalculation = sqrt(pow((x - x2), 2) + pow((y - y2), 2) + pow((z - z2), 2));
	//cout << x << " " << y << " " << z << " " << x2 << " " << y2 << " " << z2 << endl;

	return distanceCalculation;
}

void sortDistances(vector<double>& distances) {
	double lowestNumIndex, temp;
	for (unsigned int i = 0; i < distances.size() - 1; ++i) {
		lowestNumIndex = i;
		for (unsigned int j = i + 1; j < distances.size(); ++j) {
			if (distances.at(j) < distances.at(lowestNumIndex))
				lowestNumIndex = j;
		}

		temp = distances.at(i);
		distances.at(i) = distances.at(lowestNumIndex);
		distances.at(lowestNumIndex) = temp;
	}
}