#include<string>
#ifndef CALCULATOR_H
#define CALCULATOR_H
using namespace std;
class CALCULATOR
{
public:
	
	// setters
	void setA(int a);
	void setB(int b);
	void setAddition(int a, int b);
	void setSubtraction(int a, int b);
	void setMultiplication(int a, int b);
	void setDivision(float a, float  b);
	void setRemainder(int a, int b);

	// getters

	int getA()const;
	int getB()const;
	int getAddition()const;
	int getSubtraction()const;
	int getMultiplication()const;
	float getDivision()const;
	int getRemainder()const;
private:
	int a = 0;
	int b = 0;
	float d1 = a / b;

	


};

#endif