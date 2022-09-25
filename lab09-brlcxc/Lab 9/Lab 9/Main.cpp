#include <iostream>
#include <fstream>
using namespace std;

#include "OrderedBag.h"

void Execute_Options(ifstream& fin, ofstream& fout, OrderedBag& bagNum) {
    char option;
    int bagNumber;

    while (fin.good()) {
        fin >> option;
        switch (option) {
        case 'A': {
            bool itemAdded;
            fin >> bagNumber;
            itemAdded = bagNum.add_item(bagNumber);
            if (itemAdded)
                fout << "Item " << bagNumber << " added" << endl;
            else
                fout << "Item " << bagNumber << " unsuccesfully added" << endl;
            break;
        }
        case 'R': {
            int itemRemoved;
            itemRemoved = bagNum.remove_item();
            fout << "Item " << itemRemoved << " removed" << endl;
            break;
        }
        case 'D': {
            bool itemDeleted;
            fin >> bagNumber;
            itemDeleted = bagNum.delete_item(bagNumber);
            if (itemDeleted)
                fout << "Item " << bagNumber << " deleted" << endl;
            else
                fout << "Item " << bagNumber << " unsuccesfully deleted" << endl;
            break;
        }
        case 'Z': {
            bool itemsDeleted;
            fin >> bagNumber;
            itemsDeleted = bagNum.delete_item(bagNumber);
            if (itemsDeleted)
                fout << "Items " << bagNumber << " deleted" << endl;
            else
                fout << "Items " << bagNumber << " unsuccesfully deleted" << endl;
            break;
        }
        default:
            fout << "Improper Input" << endl;
        }
    }
}


int main() {
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    OrderedBag bagNum;

    Execute_Options(fin, fout, bagNum);
    fout << endl << bagNum.size() << " items still in bag" << endl;

    fout.close();
}