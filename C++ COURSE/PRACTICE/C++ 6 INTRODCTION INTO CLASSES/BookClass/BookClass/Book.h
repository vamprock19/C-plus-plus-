#ifndef BOOK_H
#define BOOK_H
#include<iostream>
using namespace std;
class BOOK
{
public:
	/*setters*/

	void setBookNum(int bookNum);
	void setPageNum(int pagesNum);
	
	void setPrice(float price);

	void setEdition(string editon);
	void setTitle(string bookName);
	void setPublishDate(string date);
	void setAuthor(string author);

	/*methods*/
	void bookPrint()const;
	void randomNum(int nunmber)const;

	/*getters*/

	int getBookNum()const;
	int getPageNum()const;

	float getPrice()const;

	string getEdition()const;
	string gettitle()const;
	string getPublishDate()const;
	string getAuthor()const;
	

private:
	int bookNum = 0;
	int pageNum = 0;
	float price = 0;
	string edition = "";
	string bookName = "";
	string PublishDate = "";
	string author = "";
};














#endif
