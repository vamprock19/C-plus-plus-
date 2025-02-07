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
	void setDivision(float a, float b);
	void setRemainder(float a, float b);

    // getters
	int getA()const;
	int getB()const;
	int getAdditon()const;
	int getSubtraction()const;
	int getMultiplication()const;
	int getDivision()const;
	int getRemainder()const;


private:
	int a = 0;
	int b = 0;
};


#endif
