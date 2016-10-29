#ifndef POLIGONO_H
#define POLIGONO_H
#include "pointArray.h"

class Poligono{
	protected:
		PointArray puntos;
		static int len;
		
	public:
		Poligono();
		Poligono(const Point [] , const int );
		Poligono(PointArray &);
		~Poligono();
		virtual double area();
		int getPoligonos();
		int getSides();
		PointArray getPoints();
		
		
};
#endif
