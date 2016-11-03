#include <iostream>
#include "rectangulo.h"

using namespace std;

Point constructorPuntos[4];

Point *update_Constructor(const Point &p1, const Point &p2, const Point &p3, const Point &p4=Point(0,0))
{
	constructorPuntos[0]=p1;
	constructorPuntos[1]=p2;
	constructorPuntos[2]=p3;
	constructorPuntos[3]=p4;
	return constructorPuntos;
}

Rectangulo::Rectangulo( Point &p1, Point &p3) : Poligono(update_Constructor(p1,
												Point(p1.getX(),p3.getY()),
												p3,
												Point(p3.getX() ,p1.getY())
												)
												,4){}


Rectangulo::Rectangulo(int x1, int y1, int x3, int y3) : Poligono(
														update_Constructor(Point(x1,y1),
																			Point(x1,y3),
																			Point(x3,y3),
																			Point(x3,y1)
																			)
																			,4) {}

double Rectangulo::area(){
	this->base = constructorPuntos[3].getX() - constructorPuntos[0].getX();
	this->altura = constructorPuntos[1].getY() - constructorPuntos[0].getY();

	cout<<"area: ";
	return (base*altura);
}
