#include <iostream>
#include "point.h"

using namespace std;

Point::Point(){
	x=0;
	y=0;
}
Point::Point(int a, int b){
	x=a;
	y=b;
}
Point::Point(Point &p){
	x=p.getX();
	y=p.getY();
}
int Point::getX(){
	return x;
}
int Point::getY(){
	return y;
}
void Point::setX(int a){
	x=a;
}
void Point::setY(int b){
	y=b;
}
void Point::print_point(){
	cout<<"( "<<x<<" , "<<y<<" )";
}
void Point::modify_point(int a, int b){
	x=a;
	y=b;
}
