#include <iostream>
#include "vector.h"
#include <math.h>


using namespace std;

void Vector::setPoint_s(Point a){
	start=a;
}
void Vector::setPoint_e(Point b){
	end=b;
}
Point Vector::getPoint_s(){
	return start;
}
Point Vector::getPoint_e(){
	return end;
}
double Vector::distance_points(){
	double d;
	d=sqrt(pow((end.getY()-start.getY()),2)+pow((end.getX()-start.getX()),2));
	return d;
}
