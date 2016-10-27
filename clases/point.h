#ifndef POINT_H
#define POINT_H

class Point{
	private:
		double x;
		double y;
	public:
		Point();
		Point(double, double);
		Point(Point &);
		double getX();
		double getY();
		void setX(double);
		void setY(double);
		void print_point();
		void modify_point(double, double);
	
};

#endif
