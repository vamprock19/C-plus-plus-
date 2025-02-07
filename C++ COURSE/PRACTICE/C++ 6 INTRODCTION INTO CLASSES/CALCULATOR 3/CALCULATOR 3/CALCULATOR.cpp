#include "CALCULATOR.h"
#include<string>
using namespace std;

void CALCULATOR::setA(int a)
{
	this->a = a;
}
void CALCULATOR::setB(int b)
{
	this->b = b;
}
void CALCULATOR::setAddition(int a, int b)
{
	this->a = a;
	this->b = b;
}
void CALCULATOR::setSubtraction(int a, int b)
{
	this->a = a;
	this->b = b;
}
void CALCULATOR::setMultiplication(int a, int b)
{
	this->a = a;
	this->b = b;
}
void CALCULATOR::setDivision(int a, int b)
{
	this->a = a;
	this->b = b;
}
void CALCULATOR::setRemainder(float a, float b)
{
	this->a = a;
	this->b = b;
}
int CALCULATOR::getA()const
{
	return a;
}

int getB()const
{
	return b;
}
int getAddition()const
{
	return a + b;
}
int getSubtraction()const
{
	return a - b;
}
int getMultiplication()const
{
	return a * b;
}
int getDivision()const
{
	return a / b;
}
int getReminder()const
{
	return a % b;
}