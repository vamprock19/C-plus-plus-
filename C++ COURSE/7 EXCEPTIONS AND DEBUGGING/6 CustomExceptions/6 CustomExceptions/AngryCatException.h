#ifndef ANGRY_CAT_EXCEPTION_H
#define ANGRY_CAT_EXCEPTION_H

#include<iostream>
using namespace std;

class AngryCatException : public runtime_error
{
public:
	AngryCatException() : runtime_error("Made kitty angry")
	{

	}

};


#endif
