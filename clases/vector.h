#ifndef VECTOR_H
#define VECTOR_H

#include "point.h"

class Vector{
private:
	Point start;
	Point end;
public:
	Vector();
	Vector(Point ,Point);
	void setPoint_s(Point);
	void setPoint_e(Point);
	Point getPoint_s();
	Point getPoint_e();
	void printVector();
	double distance_points();
};

#endif
