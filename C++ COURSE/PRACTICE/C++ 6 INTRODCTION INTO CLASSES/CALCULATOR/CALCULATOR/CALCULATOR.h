#include<string>
#ifndef CALCULATOR_H
#define CALCULATOR_H
class CALCULATOR
{
public:
	// setters
	void setA(int a);
	void setB(int b);
	void setSum(int a, int b);
	void setMulti(int a, int b);
	void setDiv(float a, float b);
	void setRemainder(int a, int b);
	void setSub(int a, int b);
	//getters
	int getA()const;
	int getB()const;
	int getSum()const;
	int getMulti()const;
	float getDiv()const;
	int getRemainder()const;
	int getSub()const;
private:
	int a = 0;
	int b = 0;
};

#endif

