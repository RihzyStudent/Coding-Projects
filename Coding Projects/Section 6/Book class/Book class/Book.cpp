#include <iostream>
#include "Book.h"
using namespace std;

	book::book(string author, string title, string genre, int numPages) {
		this->author = author;
		this->title = title;
		this->genre = genre;
		this->numPages = numPages;
}
	string book::getAuthor() const{
		return author;
}
	string book::getTitle() const{
		return title;
}
	string book::getGenre() const{
		return genre;
}
	int book::getNumPages() const{
		return numPages;
}
	void book::printBookDetails() const{
		cout << "The books name is " << title << ", wriiten by " << author << ", with a genre of "
			<< genre << " with " << numPages << " pages." << '\n';
	}