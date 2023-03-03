#include"Point.cpp"
//#include"Point.h"
class Line
{	private:
	Point p11;
	Point p22;
	public:
	Line(const Point &p1, const Point &p2);
	Line(int x1, int y1, int x2, int y2);
	Line(const Line &copy); 
	Point getP1() const;
	Point getP2() const;
	string toString();
	double getSlope();
};
