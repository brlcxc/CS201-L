#pragma once
#ifndef ORDEREDBAG_H
#define ORDEREDBAG_H

#include "Bag.h"
using namespace std;

class OrderedBag : public Bag {
public:
	int remove_item();
};

#endif