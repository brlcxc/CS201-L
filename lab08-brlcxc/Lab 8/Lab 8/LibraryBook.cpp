#include <iostream>
using namespace std;

#include "LibraryBook.h"

//LibraryBook::LibraryBook() : title(""), author(""), ISBN(""), checkedOut(false) {
//}

LibraryBook::LibraryBook() {
	title = "";
	author = "";
	ISBN = "";
	checkedOut = false;
}

LibraryBook::LibraryBook(string dataTitle, string dataAuthor, string dataISBN) {
	title = dataTitle;
	author = dataAuthor;
	ISBN = dataISBN;
	checkedOut = false;
}

string LibraryBook::getTitle() {
	return title;
}

string LibraryBook::getAuthor() {
	return author;
}

string LibraryBook::getISBN() {
	return ISBN;
}

void LibraryBook::checkOut() {
	checkedOut = true;
}

void LibraryBook::checkIn() {
	checkedOut = false;
}

bool LibraryBook::isCheckedOut() {
	return checkedOut;
}
