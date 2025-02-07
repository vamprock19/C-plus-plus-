#include"BOOK.h"
#include<string>
#include<iostream>
using namespace std;


void BOOKCLASS::setPages(int pages)
{
	this->pages = pages;
}
void BOOKCLASS::setBookNum(int bookNum)
{
	this->booknum = bookNum;
}
void BOOKCLASS::setTitle(string title)
{
	this->title = title;
}
void BOOKCLASS::setAuthor(string author)
{
	this->author = author;
}
void BOOKCLASS::setPublisher(string publisher)
{
	this->publisher = publisher;
}

int BOOKCLASS::getPages()const
{
	return pages;
}
int BOOKCLASS::getBookNum()const
{
	return booknum;
}
string BOOKCLASS::getTitle()const
{
	return title;
}
string BOOKCLASS::getAuthor()const
{
	return author;
}
string BOOKCLASS::getPublisher()const
{
	return publisher;
}

void BOOKCLASS::printBook()
{
	cout << "title:        " << title << endl;
	cout << "Author:       " << author << endl;
	cout << "Pages:        " << pages << endl;
	cout << "Books:        " << booknum << endl;
	cout << "Publisher:    " << publisher << endl;
	cout << endl;
}

