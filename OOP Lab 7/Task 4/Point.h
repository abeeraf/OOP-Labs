#include<iostream>
using namespace std;

class Point
{
	private:
	int x;
	int y;
	
	public:
	Point();
	Point(int x1, int y1);
	Point(const Point &copy);
	int getX() const;
	int getY() const;
	void setX(int x1);
	void setY(int y1);
	~Point();
};
