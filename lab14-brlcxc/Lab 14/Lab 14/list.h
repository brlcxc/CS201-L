#pragma once
#include <string>
#include <fstream>
#include <list>

using namespace std;

#ifndef LIST_H
#define LIST_H

void fillList(list<char>& characterList, string items);
void printList(list<char> characterList, ofstream& fout);
void removeCharacter(list<char>& characterList, char removeChar);

#endif