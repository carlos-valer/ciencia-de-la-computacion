#include<iostream>
#include "triangulo.h"
#include "rectangulo.h"

using namespace std;

void printAtributos(Poligono *polygon)
{
	if(polygon->getSides()==3){
		cout<<"TRIANGULO"<<endl;
	}
	else{
		cout<<"RECTANGULO"<<endl;
	}
	cout << polygon->area() <<endl;
	polygon->getPoints().printArray();
	cout<<endl;
}



int main () {
	Point point1(0,0),point2(0,4),point3(5,0);
	Point p1,p2(5,4);
	
	Triangulo t(point1,point2,point3);
	Rectangulo rect(p1,p2);
	
	printAtributos(&t);
	printAtributos(&rect);
	
	
//	cout<< t.getPoligonos();
	
	return 0;
}
