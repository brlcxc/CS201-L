#include <iostream>
using namespace std;

int main() {

	double distance, time, velocity;

	cout << "Enter how many miles you are traveling on your trip" << endl;
	cin >> distance;

	cout << "How fast are you traveling in mph? " << endl;
	cin >> velocity;
	
    // Calculate the time it takes here.
	time = distance/velocity;

	cout << endl;
	cout << "At " << velocity << " mph it will take " << time << " hours to travel " << distance << " miles on your trip." << endl;
	
	return 0;

}