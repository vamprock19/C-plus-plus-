#include"CALCULATOR.h"
#include<iostream>
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
void CALCULATOR::setDivision(float a, float b)
{
	this->a = a;
	this->b = b;

}
void CALCULATOR::setRemainder(int a, int b)
{
	this->a = a;
	this->b = b;
}

// getters
int CALCULATOR::getA()const
{
	return a;
}
int CALCULATOR::getB()const
{
	return b;
}
int CALCULATOR::getAddition()const
{
	return a + b;
}
int CALCULATOR::getSubtraction()const
{
	return a - b;
}
int CALCULATOR::getMultiplication()const
{
	return a * b;
}
float CALCULATOR::getDivision()const
{
	return a / b;
}
int CALCULATOR::getRemainder()const
{
	return a % b;
}
