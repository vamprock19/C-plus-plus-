#include"Book.h"
#include<string>
#include<iostream>
using namespace std;

void Print(const Book& book);
int main()
{
	Book GameOfThrones("George Martin", "Game Of Thrones", "Fantasy", 864);
	Book MathBook("James Stewart", "Calculus", "Math", 1392);
	Book CppBook("Bjarne Stroustrup", "the C++ Programming Languages", "Programming", 1376);

	GameOfThrones.bookPrint();
	MathBook.bookPrint();
	CppBook.bookPrint();

	/*Print(GameOfThrones);
	Print(MathBook);
	Print(CppBook);*/


	return 0;
}

void Print(const Book& book)
{
	cout << "Name: " << book.getBookName() << endl;
	cout << "Author: " << book.getAuthor() << endl;
	cout << "Genre: " << book.getGenre() << endl;
	cout << "Pages: " << book.getnumPages() << endl;
	cout << endl << endl;
}
/*
  Book GameOfThrones("George Martin", "Game Of Thrones","Fantasy",864);
	Book mathBook("James Stewart", "Calculus", "Math", 1392);
	Book cppBook("Bjarne Stroustrup", "The C++ Programming Languages", "Programming", 1376);
*/