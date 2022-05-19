#include <iostream>
#include "Book.h"
using namespace std;



int main() {
	book gameOfThrones("George Martin", "Game of Thrones", "Fantasy", 864);
	book mathBook("James Stewart", "calculus", "Maths", 1392);
	book cppbook("Bjarne Stroustrup", "The C++ Programming Language", "Programming", 1376);

	gameOfThrones.printBookDetails();
	mathBook.printBookDetails();
	cppbook.printBookDetails();
}
