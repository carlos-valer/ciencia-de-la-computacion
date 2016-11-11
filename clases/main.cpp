#include<iostream>
#include "triangulo.h"
#include "rectangulo.h"
#include "point.h"
#include <typeinfo>

void printAtributos(Poligono *polygon)
{
	if(polygon->getSides()==3){
		std::cout<<"TRIANGULO"<<std::endl;
	}
	else{
		std::cout<<"RECTANGULO"<<std::endl;
	}
	std::cout << polygon->area() <<std::endl;
	polygon->getPoints().printArray();
	std::cout<<std::endl;
}








//template <class T>

//T min(T a, T b){
//	if(a<b){
//		return a;
//	}
//	else {
//		return b;
//	};	
//}

//
//template <class T>
//T min(T a, T b){
//	return (a<b)? a : b;
//}





int main () {
	Point a(0,0);
	Point b(0,4);
	Point c(3,0);
	Rectangulo *rect=new Rectangulo(0,0,4,2);
	Triangulo *triangle=new Triangulo(a,b,c);
	
//	rect=dynamic_cast<Rectangulo *>(triangle);
//	printAtributos(rect);

	try{
//		Rectangulo *rect=new Rectangulo(0,0,4,2);
//		Triangulo *triangle=new Triangulo(a,b,c);
		triangle=dynamic_cast<Triangulo *>(rect);
		rect->getPoints().printArray();
//		printAtributos(rect);
	}
	catch(std::bad_alloc&){
		std::cout<<"no se completo el proceso";
	}
//	std::cout<<typeid(a).name();
//	printAtributos(triangle);
//	printAtributos(rect);
	
	
	
	
	
	
	
	
//	int t1x,t1y,t2x,t2y,t3x,t3y;
//	int n1x,n1y,n2x,n2y;
//	cout<<"punto inferior izquierdo: ";
//	cin>>n1x>>n1y;
//	cout<<"\npunto inferior izquierdo: ";
//	cin>> n2x>>n2y;
//	cout<<"\puntos del triangulo: ";
//	cin>> t1x>>t1y>>t2x>>t2y>>t3x>>t3y;
//	
//	Point point1(t1x,t1y),point2(t2x,t2y),point3(t3x,t3y);
//	Point p1(n1x,n1y),p2(n2x,n2y);
//	
//	Triangulo t(point1,point2,point3);
//	Rectangulo rect(p1,p2);
//	
//	printAtributos(&t);
//	printAtributos(&rect);
//	cout<< t.getPoligonos();
	
	
	return 0;
}
