#ifndef POLIGONO_H
#define POLIGONO_H
#include "pointArray.h"

class Poligono{
	protected:
		PointArray pts;
		static int a;
		
	public:
		Poligono(const Point [] , const int );
	
};
#endif
