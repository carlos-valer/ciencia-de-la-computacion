#include <iostream>
#include "PointArray.h"
using namespace std;

void PointArray::resize(const int t)
{
	this->tam=t;
	if(tam<t){
		Point *a=new Point[t];
		for(int i=0;i<t;i++){
			a[i]=points[i];
		}
		delete[] points;
		points=a;
	}
}

PointArray::PointArray(){
	tam=0;
	points=new Point[tam];
	
}

PointArray::PointArray(const Point p[],const int t)
{
	this->tam=t;
	points=new Point[tam];

	for(int i=0;i<tam;i++){
		points[i]=p[i];
	}
}

PointArray::PointArray(const PointArray &p)
{
	tam=p.tam;
	points=new Point[tam];

	for(int i=0;i<tam;i++){
		points[i]=p.points[i];
	}
}
PointArray::~PointArray(){}

void PointArray::printArray(){
	cout<<"puntos: ";
	for(int i=0;i<tam;i++){
		points[i].print_point();
	}
}

void PointArray::push_back(const Point &p){
	PointArray temp(this->points,tam);
	resize(tam-1);
	PointArray(points,tam);
	for(int i=0;i<tam-1;i++){
		points[i]=temp.points[i];
	}
	points[tam-1]=p;
}

void PointArray::insert(const int index, const Point &p){
	resize(++tam);
	for(int i=tam;i>index;i--){
		points[i-1]=points[i-2];
	}
	points[index]=p;
}

void PointArray::remove(const int index)
{
	Point *temp=new Point[tam-index-1];
	temp=&(points[index+1]);
	resize(--tam);
	Point *a=new Point[tam];
	
	for(int i=0;i<index;i++){
		a[i]=points[i];
	}
	for(int i=index,j=0;i<tam;i++,j++){
		a[i]=temp[j];
	}
	delete[] points;
	points=a;
}

const int PointArray::getSize(){
	return tam;
}

void PointArray::clear(){
	tam=0;
	points=new Point[tam];
	delete[] points;
}
Point *PointArray::get(const int index){
	if(index >= tam){
		return (0,0);
	}
//	int i=0;
//	while(i++<index){}
	Point *t=new Point[tam-index];
	for(int i=0;i<tam-index;i++){
		t[i]=points[index+i];
	}
	return t;
}
const Point *PointArray::get(const int index)const{
	
}
