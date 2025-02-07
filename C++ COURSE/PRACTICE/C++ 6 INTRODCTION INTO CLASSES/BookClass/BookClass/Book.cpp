#include<iostream>
#include "BOOK.h"
#include<array>
using namespace std;

/*setters*/
void BOOK::setBookNum(int bookNum)
{
	this->bookNum = bookNum;
}
void BOOK::setPageNum(int pageNum)
{
	this->pageNum = pageNum;
}
void BOOK::setPrice(float price)
{
	this->price = price;
}
void BOOK::setEdition(string edition)
{
	this->edition = edition;
}
void BOOK::setTitle(string bookName)
{
	this->bookName = bookName;
}
void BOOK::setPublishDate(string date)
{
	this->PublishDate = date;
}
void BOOK::setAuthor(string author)
{
	this->author = author;
}
/*getters*/

int BOOK::getBookNum()const
{
	return bookNum;
}
int BOOK::getPageNum()const
{
	return pageNum;
}
float BOOK::getPrice()const
{
	return price;
}
string BOOK::getEdition()const
{
	return edition;
}
string BOOK::gettitle()const
{
	return bookName;
}
string BOOK::getPublishDate()const
{
	return PublishDate;
}
string BOOK::getAuthor()const
{
	return author;
}



void BOOK::bookPrint()const
{
	cout << "Book info: " << endl;
	cout << endl << endl;

	cout << "Book: "<<bookName<< endl;
	cout << "Copies: " << bookNum << endl;
	cout << "Number of pages: " << pageNum << endl;
	cout << "Edition: " << edition << endl;
	cout << "Price: " << price << " $ " << endl;
	cout << "Publication date: " << PublishDate << endl;
	cout << "Author: " << author << endl;
	

}
void BOOK::randomNum(int number)const
{
	array<int, 6>al = { 0,0,0,0,0 };
	int op = 0;

	for (int i = 0; i < 5; i++)
	{
		al[i] = rand() % 200;
		cout << al[i] << endl;
	}
	

};