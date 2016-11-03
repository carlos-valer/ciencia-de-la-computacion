#ifndef POINT_H
#define POINT_H

class Point{
	private:
		int x;
		int y;
		
	public:
		Point();
		Point(int , int);
		Point(Point &);
		int getX();
		int getY();
		void setX(int);
		void setY(int);
		void print_point();
		void modify_point(int, int);
	
};

#endif
