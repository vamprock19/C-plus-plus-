#ifndef BOOK_CLASS_H
#define BOOK_CLASS_H
#include<string>
using namespace std;
class Book
{
public:
	Book(string author, string title, string genre, int numPages);
	string getAuthor()const;
	string getTitle()const;
	string getGenre()const;
	int getnumPages()const;
	void printBookDetails()const;
	/*we make our classes inmutable by not putting setters*/

private:
	string author = "";
	string title = "";
	string genre = "";
	int numPages = 0;
};


#endif
