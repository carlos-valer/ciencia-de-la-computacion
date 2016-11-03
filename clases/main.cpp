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
	int t1x,t1y,t2x,t2y,t3x,t3y;
	int n1x,n1y,n2x,n2y;
	cout<<"punto inferior izquierdo: ";
	cin>>n1x>>n1y;
	cout<<"\npunto inferior izquierdo: ";
	cin>> n2x>>n2y;
	cout<<"\puntos del triangulo: ";
	cin>> t1x>>t1y>>t2x>>t2y>>t3x>>t3y;
	
	Point point1(t1x,t1y),point2(t2x,t2y),point3(t3x,t3y);
	Point p1(n1x,n1y),p2(n2x,n2y);
	
	Triangulo t(point1,point2,point3);
	Rectangulo rect(p1,p2);
	
	printAtributos(&t);
	printAtributos(&rect);
	cout<< t.getPoligonos();
	
	
	return 0;
}
