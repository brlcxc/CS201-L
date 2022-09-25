#include <iostream>
#include <vector>

using namespace std;

#include "OrderedBag.h"

int OrderedBag::remove_item() {
	int lowestNumIndex, lowestNum;
	lowestNumIndex = 0;
	for (unsigned int i = 0; i < bagList.size(); ++i) {
		if (bagList.at(i) < bagList.at(lowestNumIndex))
			lowestNumIndex = i;
	}

	lowestNum = bagList.at(lowestNumIndex);
	int temp = bagList.at(bagList.size() - 1);
	bagList.at(lowestNumIndex) = temp;
	bagList.pop_back();

	return lowestNum;
}