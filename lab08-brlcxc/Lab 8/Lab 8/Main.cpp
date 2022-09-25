#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "LibraryBook.h"

using namespace std;

void main() {
	ifstream fin("books.txt");
	ifstream fin2("isbns.txt");
	ofstream fout("checkedout.csv");
	vector<LibraryBook> bookList;
	string dataTitle;
	string dataAuthor;
	string dataISBN;

	while (fin.good()) {
		getline(fin, dataTitle);
		getline(fin, dataAuthor);
		fin >> dataISBN;

		LibraryBook book(dataTitle, dataAuthor, dataISBN);
		bookList.push_back(book);

		fin.ignore();
	}

	while (fin2.good()) {
		fin2 >> dataISBN;
		for (unsigned int i = 0; i < bookList.size(); ++i) {
			if (dataISBN.compare(bookList.at(i).getISBN()) == 0) {
				if (bookList.at(i).isCheckedOut())
					bookList.at(i).checkIn();
				else
					bookList.at(i).checkOut();
				break;
			}
		}
	}

	fout << "\"Title\",\"Author\",\"ISBN\"\n";
	for (unsigned int i = 0; i < bookList.size(); ++i) {
		if (bookList.at(i).isCheckedOut())
			fout << "\"" << bookList.at(i).getTitle() << "\",\"" << bookList.at(i).getAuthor() << "\",\"" << bookList.at(i).getISBN() << "\"\n";
	}
	fout.close();
}