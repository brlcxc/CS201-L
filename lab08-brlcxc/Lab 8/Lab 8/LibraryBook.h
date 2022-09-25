#pragma once
#ifndef SOME_CLASS_H 
#define SOME_CLASS_H  

#include <string>

using namespace std;

class LibraryBook {
	public:
		LibraryBook();
		LibraryBook(string dataTitle, string dataAuthor, string dataISBN);
		string getTitle();
		string getAuthor();
		string getISBN();
		void checkOut();
		void checkIn();
		bool isCheckedOut();
	private:
		string author;
		string title;
		string ISBN;
		bool checkedOut;
};

#endif