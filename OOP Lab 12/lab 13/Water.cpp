#include "Water.h"
Water::Water():Drink()
{

}
Water::Water(string a , string b, int c, int d, int e):Drink(b,c,d,e)
{
	supplier=a;
}
Water::Water(string a, Drink obj):Drink(obj.getFlavor(),obj.getTemp(),obj.getPrice(),obj.getExpDate())
{
	supplier=a;
}
void Water::display()
{

}
