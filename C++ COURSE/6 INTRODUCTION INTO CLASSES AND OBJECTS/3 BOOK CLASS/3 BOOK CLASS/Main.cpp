#include"BOOK.h"
#include<iostream>
#include<string>
using namespace std;

void printBookDetails(const Book& book);
int main()
{
	Book GameOfThrones("George Martin", "Game Of Thrones","Fantasy",864);
	Book mathBook("James Stewart", "Calculus", "Math", 1392);
	Book cppBook("Bjarne Stroustrup", "The C++ Programming Languages", "Programming", 1376);

	/*printBookDetails(GameOfThrones);
	printBookDetails(mathBook);
	printBookDetails(cppBook);*/
	GameOfThrones.printBookDetails();
	mathBook.printBookDetails();
	cppBook.printBookDetails();

	return 0;
}
void printBookDetails(const Book& book)
{
	cout << "Book: " << book.getTitle() << endl;
	cout << "Author: " << book.getAuthor() << endl;
	cout << "Genre: " << book.getGenre() << endl;
	cout << "Pages: " << book.getnumPages() << endl;
	cout << endl << endl;
}