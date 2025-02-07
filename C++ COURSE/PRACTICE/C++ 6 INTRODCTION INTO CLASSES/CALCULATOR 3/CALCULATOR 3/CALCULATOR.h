#include<string>
#ifndef CALCULATOR_H
#define CALCULATOR_H
class CALCULATOR
{
public:
	// setters
	void setA(int a);
	void setB(int b);
	void setAddition(int a, int b);
	void setSubtraction(int a, int b);
	void setMultiplication(int a, int b);
	void setDivision(int a, int b);
	void setRemainder(float a, float b);
	// getters
	int getA()const;
	int getB()const;
	int getAddition()const;
	int getSubtraction()const;
	int getMultiplication()const;
	int getDivision()const;
	float getRemainder() const;
private:
	int a = 0;
	int b = 0;
};

#endif
