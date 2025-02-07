#ifndef BOOKCLASS_H
#define BOOKCLASS_H
#include<iostream>
using namespace std;

class BOOKCLASS
{
public:
	
	void setPages(int pages);
	void setBookNum(int bookNum);
	void setTitle(string title);
	void setAuthor(string author);
	void setPublisher(string publisher);

	int getPages()const;
	int getBookNum()const;
	string getTitle()const;
	string getAuthor()const;
	string getPublisher()const;

	void printBook();

private:

	int pages = 0;
	int booknum = 0;
	string title = "";
	string author = "";
	string publisher = "";
};









#endif
