#include <iostream>

using namespace std;

class Point{
	private:
		double x,y;
	public:
		Point()
		{
			x=0.0,y=0.0;
		}
		Point(double a, double b)
		{
			x=a;
			y=b;
		}
		Point(Point &p)
		{			
			x=p.getX();
			y=p.getY();
		}
		
		double getX();
		double getY();
		void setX(double);
		void setY(double);
		void print_point();
		void modify_point(double, double);
};
