#ifndef Point_h
#define Point_h
class Point {
private:
	int X_Coordinate;
	int Y_Coordinate;
public:
	Point();
	Point(int , int);
	Point(const Point &p);
	int getX_Coordinate() const;
	int getY_Coordinate() const;
	void setX_Coordinate(int x);
	void setY_Coordinate(int y);
	
};
#endif
