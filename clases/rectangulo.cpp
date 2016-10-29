#include <iostream>
#include "rectangulo.h"
#include "poligono.h"


using namespace std;


Rectangulo::Rectangulo(Point p1, Point p2){
	Point p3(p1.getX() ,p2.getY());
	Point p4(p2.getX() ,p1.getY());
//	Point *lista=new Point[pts_rect];
	const Point lista[]={p1,p3,p2,p4};
	
//	lista[0]=p1;
//	lista[1]=p3;
//	lista[2]=p2;
//	lista[3]=p4;
	
//	puntos(lista,pts_rect);
	
}

Rectangulo::Rectangulo(int n1,int n2,int n3, int n4){
	cout<< "hola"<<endl;
}
	
//double Rectangulo::area_rect(){
//	this->base = puntos[3].getX() - puntos[0].getX();
//	this->altura = puntos[1].getY() - puntos[0].getY();
//	
//	return (base*altura)/2;
//}
