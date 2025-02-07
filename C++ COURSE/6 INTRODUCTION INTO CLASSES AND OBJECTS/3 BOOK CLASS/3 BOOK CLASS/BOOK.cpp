#include"BOOK.h"
#include<string>
#include<iostream>
using namespace std;

Book::Book(string author, string title, string genre, int numPages)
{
	this->author = author;
	this->title = title;
	this->genre = genre;
	this->numPages = numPages;
}
string Book::getAuthor()const
{
	return author;
}
string Book::getTitle()const
{
	return title;
}
string Book::getGenre()const
{
	return genre;
}
int Book::getnumPages()const
{
	return numPages;
}
void Book::printBookDetails()const
{
	cout << "Book: " << title << endl;
	cout << "Author: " << author << endl;
	cout << "Genre: " << genre << endl;
	cout << "Pages: " << numPages << endl;
	cout << endl << endl;

}
