#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>
#include "checkingmodule.h"
using namespace std;

void main() {
	ifstream fin("input.txt");
	ofstream fout("output.txt"), fout2("output_sorted.txt");
	vector<vector<int>> locationPoints;
	vector<double> distances;
	int data, count = 0, distanceIndex = 0;
	double distanceValue;

	while (fin.good()) {
		for (int i = 0; i < 6; ++i) {
			fin >> data;
			locationPoints.resize(distanceIndex + 1);//This should probably be before the for loop
			locationPoints.at(distanceIndex).push_back(data);
		}
		distanceValue = calcDistance(locationPoints.at(distanceIndex).at(0), locationPoints.at(distanceIndex).at(1), locationPoints.at(distanceIndex).at(2), locationPoints.at(distanceIndex).at(3), locationPoints.at(distanceIndex).at(4), locationPoints.at(distanceIndex).at(5));
		distances.push_back(distanceValue);
		fout << distances.at(distanceIndex) << endl;
		++distanceIndex;
	}
	fout.close();

	sortDistances(distances);

	for (unsigned int i = 0; i < distances.size(); ++i) {
		fout2 << distances.at(i) << endl;
	}
	fout2.close();
}
