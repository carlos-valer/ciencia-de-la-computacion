#include <iostream>
#include "poligono.h"

using namespace std;

int Poligono::len = 0;

Poligono::Poligono(){}

Poligono::Poligono(const Point ap[], const int t) : puntos(ap,t) {
	len++;
}

Poligono::Poligono(PointArray &p) : puntos(p){
	len++;
}

Poligono::~Poligono(){};

double Poligono::area()
{
	return 0;
}	

int Poligono::getPoligonos(){
	return len;
}

int Poligono::getSides(){
	return len;
}

PointArray Poligono::getPoints(){
	const PointArray *p=&puntos;
	return *p;
}
