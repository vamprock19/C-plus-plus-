#include"BOOK.h"
#include<iostream>
using namespace std;

int main()
{

	BOOKCLASS VampireLand;
	BOOKCLASS TheArtOfGameDesing;
	BOOKCLASS AmericanPropaganda;
	BOOKCLASS CppForBeginners;

	VampireLand.setTitle("Vampire Land");
	VampireLand.setAuthor("Van Helsein");
	VampireLand.setPages(355);
	VampireLand.setBookNum(250);
	VampireLand.setPublisher("Banco inc.");
	VampireLand.printBook();

	TheArtOfGameDesing.setTitle("The Art Of Game Design");
	TheArtOfGameDesing.setAuthor("William W.");
	TheArtOfGameDesing.setPages(1582);
	TheArtOfGameDesing.setBookNum(150);
	TheArtOfGameDesing.setPublisher("Hall Shall");
	TheArtOfGameDesing.printBook();

	AmericanPropaganda.setTitle("The Real Face Of Propaganda");
	AmericanPropaganda.setAuthor("Emanuel Jazz");
	AmericanPropaganda.setPages(1245);
	AmericanPropaganda.setBookNum(90000);
	AmericanPropaganda.setPublisher("American inc. DC");
	AmericanPropaganda.printBook();

	CppForBeginners.setTitle("C++ for beginners: the guide for dumb people");
	CppForBeginners.setAuthor("Jhon Walker");
	CppForBeginners.setPages(18479);
	CppForBeginners.setBookNum(800);
	CppForBeginners.setPublisher("Mexico inc. DF");
	CppForBeginners.printBook();

	return 0;
}