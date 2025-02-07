#include<iostream>
#include<string>
#include "Book.h"

using namespace std;

int main()
{
	

	

	BOOK The_lord_of_the_rings;
	BOOK Art_of_game_design;
	BOOK AOW;
	BOOK level_Up;
	BOOK BCPP;
	BOOK TOF;
	BOOK num;

	The_lord_of_the_rings.setTitle("the lord of the rings");
	The_lord_of_the_rings.setBookNum(25);
	The_lord_of_the_rings.setPageNum(1993);
	The_lord_of_the_rings.setEdition("1st edition");
	The_lord_of_the_rings.setPrice(25.99f);
	The_lord_of_the_rings.setPublishDate("january 2003");
	The_lord_of_the_rings.setAuthor("Jhon Ronald");

	The_lord_of_the_rings.bookPrint();
	cout << endl << endl;

	Art_of_game_design.setTitle("The art of game design: A book of lenses");
	Art_of_game_design.setBookNum(19);
	Art_of_game_design.setPageNum(652);
	Art_of_game_design.setEdition("3rd edition");
	Art_of_game_design.setPrice(100.83f);
	Art_of_game_design.setPublishDate("Aug. 27 2019");
	Art_of_game_design.setAuthor("Jesse Schell");

	Art_of_game_design.bookPrint();
	cout << endl << endl;

	AOW.setTitle("The art of war(Deluxe edition");
	AOW.setBookNum(145);
	AOW.setPageNum(235);
	AOW.setEdition("Deluxe edition");
	AOW.setPrice(19.99f);
	AOW.setPublishDate("Dec 1 2018");
	AOW.setAuthor("Sun Tzu");
	AOW.bookPrint();
	cout << endl << endl;
	
	level_Up.setTitle("Level up! The guide to Great video game design");
	level_Up.setBookNum(856);
	level_Up.setPageNum(560);
	level_Up.setEdition("2nd edition");
	level_Up.setPrice(38.95f);
	level_Up.setPublishDate("April 28 2014");
	level_Up.setAuthor("Scott Rogers");
	level_Up.bookPrint();
	cout << endl << endl;

	BCPP.setTitle("Beginning C++ Game Programming");
	BCPP.setBookNum(250);
	BCPP.setPageNum(648);
	BCPP.setEdition("3rd edition");
	BCPP.setPrice(63.09f);
	BCPP.setPublishDate("May 31 2024");
	BCPP.setAuthor("Jhon Horton");
	BCPP.bookPrint();
	cout << endl << endl;

	TOF.setTitle("Theory of fun for game design");
	TOF.setBookNum(250);
	TOF.setPageNum(300);
	TOF.setEdition("2nd editon");
	TOF.setPrice(59.99f);
	TOF.setPublishDate("Dec 2 2013");
	TOF.setAuthor("Raph Koster");
	TOF.bookPrint();
	
	num.randomNum(500);

	
	return 0;
}