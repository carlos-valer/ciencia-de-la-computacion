#ifndef TRIANGULO_H
#define TRIANGULO_H

#include "poligono.h"

class Triangulo: public Poligono
{
	private:
		Point *p;
	
	public:
		Triangulo(Point, Point, Point);
		double area();
};

#endif
