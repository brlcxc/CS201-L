#pragma once
#ifndef BAG_H
#define BAG_H

#include <vector>
using namespace std;

class Bag {
public:
	Bag();
	bool add_item(int item);
	virtual int remove_item();
	bool delete_item(const int&);
	bool delete_all(const int&);
	const int size();
	void clear();
protected:
	vector<int> bagList;
};

#endif