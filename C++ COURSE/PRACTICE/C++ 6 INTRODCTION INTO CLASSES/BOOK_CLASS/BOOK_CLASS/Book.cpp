#include"Book.h"
#include<string>
#include<iostream>
using namespace std;

Book::Book(string author, string bookName, string genre, int numPages)
{
	this->author = author;
	this->bookName = bookName;
	this->genre = genre;
	this->numPages = numPages;
}
string Book::getAuthor()const
{
	return author;
}
string Book::getBookName()const
{
	return bookName;
}

string Book::getGenre()const
{
	return genre;
}
int Book::getnumPages()const
{
	return numPages;
}
void Book::bookPrint()
{
	cout << "Author: " << author << endl;
	cout << "Book: " << bookName << endl;
	cout << "Genre: " << genre << endl;
	cout << "Pages: " << numPages << endl;
	cout << endl << endl;
}