#include<iostream>
#include<conio.h>
#include<string>

using namespace std;
class HOUSE
{
public:
	void setnumFloors(int numfloors)
	{
		this->numFloors = numfloors;
	}
	void setnumWindows(int numWindows)
	{
		this->numWindows = numWindows;
	}
	void setPriceRent(int priceR)
	{
		this->priceR = priceR;
	}
	void setPriceSale(int priceS)
	{
		this->priceS = priceS;
	}
	void setColor(string color)
	{
		this->color = color;
	}
	
	int getnumFloors()const
	{
		return numFloors;
	}
	int getnumWindows()const
	{
		return numWindows;
	}
	int getPriceS()const
	{
		return priceS;
	}
	int getPriceR()const
	{
		return priceR;
	}
	
	string getColor()const
	{
		return color;
	}

private:
	int numFloors = 0;
	int numWindows = 0;
	int priceR = 0;
	int priceS = 0;

	string color;
};


int main()
{
	HOUSE houseInRent;
	HOUSE houseOnSale;

	houseInRent.setColor("RED");
	houseInRent.setnumFloors(1);
	houseInRent.setnumWindows(4);
	houseInRent.setPriceRent(2400);

	houseOnSale.setColor("  YELLOW");
	houseOnSale.setnumFloors(2);
	houseOnSale.setnumWindows(8);
	houseOnSale.setPriceSale(700000);
	
	
	cout << "the house on sale has: " << endl;
	cout << endl;
	cout << houseOnSale.getnumWindows() << " WINDOWS, " << endl;
	cout << houseOnSale.getnumFloors() << " FLOORS" << endl;
	cout << houseOnSale.getColor() << endl;
	cout << "Price: " << houseOnSale.getPriceS() << endl;

	cout << "the house in rent has: " << endl;
	cout << endl;
	cout << houseInRent.getnumWindows() << " WINDOWS, " << endl;
	cout << houseInRent.getnumFloors() << " FLOORS" << endl;
	cout << houseInRent.getColor() << endl;
	cout << "Rent: " << houseInRent.getPriceR() << endl;

}
