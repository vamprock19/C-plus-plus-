#include<string>
#ifndef SHOPPING_H
#define SHOPPING_H
class SHOPPING
{
public:
	 // setters
	void setItem1(float n1);
	void setItem2(float n2);
	// getters
	float getItem1()const;
	float getItem2()const
private:
    
	float item1 = 0;
	float item2 = 0;
};
#endif