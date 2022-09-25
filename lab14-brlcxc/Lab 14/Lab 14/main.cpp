#include "list.h"
#include <iostream>
#include <fstream>
#include <list>

using namespace std;

void main() {
	list<char> characterList;
	ifstream fin("input.txt");
	ofstream fout("output.txt");
	string newInput;

	while(true){
		getline(fin, newInput);
		if (newInput == "END")
			break;
		fillList(characterList, newInput);
		removeCharacter(characterList, 'A');
		removeCharacter(characterList, 'E');
		removeCharacter(characterList, 'I');
		removeCharacter(characterList, 'O');
		removeCharacter(characterList, 'U');
		printList(characterList, fout);
		characterList.clear();
	}

	fin.close();
	fout.close();
}