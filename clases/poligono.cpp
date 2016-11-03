#include <iostream>
#include "poligono.h"

using namespace std;

int Poligono::len = 0;

Poligono::Poligono(){}

Poligono::Poligono(const Point apoints[], const int t):poligono_pts(apoints,t) {
	len++;
}

Poligono::Poligono(PointArray &p) : poligono_pts(p){
	len++;
}

Poligono::~Poligono(){
	delete &poligono_pts;
}

double Poligono::area()
{
	
	return 0;
}	

int Poligono::getPoligonos(){
	return len;
}

int Poligono::getSides(){
	return poligono_pts.getSize();
}

PointArray Poligono::getPoints(){
	return poligono_pts;
}

void Poligono::printAtributos(Poligono *p){
	cout << p->area()<<endl;
}
