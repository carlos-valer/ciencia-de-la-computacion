#include <iostream>
#include "point.h"

using namespace std;

Point::Point(){
	x=0.0;
	y=0.0;
}
Point::Point(double a, double b){
	x=a;
	y=b;
}
Point::Point(Point &p){
	x=p.getX();
	y=p.getY();
}
double Point::getX(){
	return x;
}
double Point::getY(){
	return y;
}
void Point::setX(double a){
	x=a;
}
void Point::setY(double b){
	y=b;
}
void Point::print_point(){
	cout<<"( "<<x<<" , "<<y<<" )";
}
void Point::modify_point(double a, double b){
	x=a;
	y=b;
}
