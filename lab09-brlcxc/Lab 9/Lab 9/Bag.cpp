#include <iostream>
#include <vector>
using namespace std;

#include "Bag.h"

Bag::Bag() {
	bagList.clear();
}

bool Bag::add_item(int item) {
	bagList.push_back(item);
	return true;
}

int Bag::remove_item() {
	int removedNum;
	removedNum = bagList.at(bagList.size() - 1);
	bagList.pop_back();
	return removedNum;
}

bool Bag::delete_item(const int& item) {
	for (unsigned int i = 0; i < bagList.size(); ++i) {
		if (item == bagList.at(i)) {
			int temp = bagList.at(bagList.size() - 1);
			bagList.at(i) = temp;
			bagList.pop_back();
			return true;
		}
	}
	return false;
}

bool Bag::delete_all(const int& item) {
	bool item_deleted = false, item_found = false;

	do {
		item_found = item_deleted;
		item_deleted = delete_item(item);
	} while (item_deleted);

	return item_found;
}

const int Bag::size() {
	return bagList.size();
}
void Bag::clear() {
	bagList.clear();
}