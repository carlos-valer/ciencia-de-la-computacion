#include <iostream>
#include "vector.h" 
#include <math.h>

using namespace std;

Vector::Vector(){}
Vector::Vector(Point a,Point b){
	start=a;
	end=b;
}
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
void Vector::printVector(){
	start.print_point();
	cout<<"->";
	end.print_point();
}
double Vector::distance_points(){
	double d;
	d=sqrt(pow((end.getY()-start.getY()),2)+pow((end.getX()-start.getX()),2));
	return d;
}
