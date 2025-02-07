#ifndef BOOk_H
#define BOOK_H
#include<string>
#include<iostream>
using namespace std;
class Book
{
public:
	Book(string author, string bookName, string genre,int numPages);
	string getAuthor()const;
	string getBookName()const;
	string getGenre()const;
	int getnumPages()const;
	void bookPrint();

private:
	string author;
	string bookName;
	string genre;
	int numPages;


};


#endif
