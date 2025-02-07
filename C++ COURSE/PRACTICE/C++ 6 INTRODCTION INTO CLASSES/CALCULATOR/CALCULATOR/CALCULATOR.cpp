#include"CALCULATOR.h"
#include<string>
#include<iostream>
using namespace std;

// setters
void CALCULATOR::setA(int a)
{
	this->a = a;
}
void CALCULATOR::setB(int b)
{
	this->b = b;
}
void CALCULATOR::setSum(int a, int b)
{
	this->a = a;
	this->b = b;
}
void CALCULATOR::setMulti(int a, int b)
{
	this->a = a;
	this->b = b;
}
void CALCULATOR::setDiv(float a, float b)
{
	this->a = a;
}
void CALCULATOR::setRemainder(int a, int b)
{
	this->a = a;
	this->b = b;
}
void CALCULATOR::setSub(int a, int b)
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
int CALCULATOR::getSum()const
{
	return a + b;
}
int CALCULATOR::getMulti()const
{
	return a * b;
}
float CALCULATOR::getDiv()const
{
	return a / b;
}
int CALCULATOR::getRemainder()const
{
	return a % b;
}
int CALCULATOR::getSub()const
{
	return a - b;
}
