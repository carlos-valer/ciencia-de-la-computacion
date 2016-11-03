#ifndef RECTANGULO_H
#define RECTANGULO_H
#include "poligono.h"

class Rectangulo : public Poligono
{
	private:
		double base,altura;
		
	public:
		Rectangulo( Point &, Point &);
		Rectangulo(int, int, int, int);
		double area();
};

#endif
