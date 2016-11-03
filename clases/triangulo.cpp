#include <iostream>
#include <math.h>
#include "triangulo.h"

using namespace std;

Point constructor[3];

Point *update_Constructor(const Point &p1, const Point &p2, const Point &p3)
{
	constructor[0]=p1;
	constructor[1]=p2;
	constructor[2]=p3;
	
	return constructor;
}

Triangulo::Triangulo(Point p1, Point p2, Point p3) : Poligono(update_Constructor(p1,p2,p3),3){}


double Triangulo::area(){
	double d1,d2,d3,s,a;
	d1=sqrt(pow(constructor[1].getY()-constructor[0].getY() , 2) + 
			pow(constructor[1].getX()-constructor[0].getX(), 2));
	
	d2=sqrt(pow(constructor[2].getY()-constructor[1].getY() , 2) + 
			pow(constructor[2].getX()-constructor[1].getX(), 2));
	
	d3=sqrt(pow(constructor[0].getY()-constructor[2].getY() , 2) + 
			pow(constructor[0].getX()-constructor[2].getX(), 2));
	
	s=(d1+d2+d3)/2;
	a=sqrt(s*(s-d1)*(s-d2)*(s-d3));
	cout<<"area: ";
	return a;
}
