#include "Drink.h"
Drink::Drink()
{

}
Drink::Drink(string d, int a, int b, int c)
{
	flavour=d;
	temprature=a;
	price=b;
	expiry=c;
}
int Drink::getPrice()
{
	return price;
}
int Drink::getTemp()
{
	return temprature;
}
int Drink::getExpDate()
{
	return expiry;
}
string Drink::getFlavor()
{
	return flavour;
}
