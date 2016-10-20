#include <iostream>
#include "point.h"

using namespace std;

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
	cout<<"( "<<x<<" , "<<y<<" )"<<endl;
}
void Point::modify_point(double a, double b){
	x=a;
	y=b;
}
