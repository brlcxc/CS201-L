#include "list.h"
#include <string>
#include <iostream>
#include <list>

using namespace std;

void fillList(list<char>& characterList, string items) {
	string::iterator p;
	for (p = items.begin(); p != items.end(); ++p) {
		characterList.insert(characterList.end(), *p);
	}
}

void printList(list<char> characterList, ofstream& fout) {
	list<char>::iterator p;
	for (p = characterList.begin(); p != characterList.end(); ++p) {
		fout << "[" << *p << "] -> ";
	}
	fout << "0" << endl;
}

void removeCharacter(list<char>& characterList, char removeChar) {
	auto it = characterList.begin();
	while (it != characterList.end()) {
		if (toupper(*it) == removeChar)
			it = characterList.erase(it);
		else
			++it;
	}
}